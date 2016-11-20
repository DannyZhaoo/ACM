#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[2][15];
	for(int i=0;i<2;i++){
		cin>>a[i];
		cout<<a[i]<<endl;
	}
	char *p;
	p=strstr(a[0],a[1]);
	cout<<p<<" "<<*p<<endl;
	return 0;

}
