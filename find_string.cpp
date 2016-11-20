#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
#define X 53
#define Y 58
class String
{
private:
	float member;//阙值
	char a[X][Y];//数组按行存储这53行的字符串
	int i, j, k, m, x, y, S, flag1;
	int flag2;
	int count;
	char b[58];
	string P;
public:
	String()
	{
	    count=0,i = 0, j = 0, k = 0, m = 0, x = 0, y = 0, S = 0,flag1=0;
		cout << "输入你的阙值member(0<member<1)：";
		cin >> member;
		cout << endl;
	}
	void takeout();
	void get();
	void match();
	void show1();
	void show2();
};

void String::takeout()
{
	fstream chuan("./chuan.txt");
	for (; i < 53; i++)
		chuan.getline(a[i],58);//把字符串导入到a[i][j]的二维数组中
//	cout<<a[1]<<endl;
//	for (i = 0; i < 53; i++)
//		cout << a[i] << endl;//输出这个字符串看看自己是否导入成功
}

void String::get()
{
	for (i = 0; i < 53; i++)
	{
		for (j = 0; j < 57; j++)
			for (k = 1; k < 58 - j; k++)
			{
				for (m = 0; m < k; m++)
				{
					b[m] = a[i][j + m];
				}
				b[m] = '\0';
				flag1 = i;
				flag2 = j;
				match();
			}
	}
}

void String::match()
{
	char *p;
	for (y=0; y < 53; y++)
	{
		p = strstr(a[y], b);
		if (p)   
		{
			count++;

			if (y < flag1)   
			{
				count = 0;
				return;
			}
			if (y==flag1 && p !=a[flag1]+flag2)
			{
			    count = 0;
				return;
			}
		//	cout<<"p is "<<*p<<"  "<<y<<endl;
		}
	}
	if (count / 53.0 > member)
	{
		show1();
	}
	count = 0;
}
void String::show1()
{
	for (x=0; x < 58&&b[x]!='\0'; x++)
		cout << b[x] ;
	S++;
	cout << endl;
}
void String::show2()
{
	cout<<"一共有"<<S<<"个子串"<<endl;
}
int main()
{
	String p1;
	p1.takeout();
	p1.get();
	p1.match();
	p1.show2();
}
