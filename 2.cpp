#include<iostream>
#include<iomanip>//设置位数
#include<math.h>
using namespace std;
int main(){
	float x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<fixed<<setprecision(2)<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<<endl;
	return 0;

}
