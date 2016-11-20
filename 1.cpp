#include <iostream>  
#include <cstdio>  
using namespace std;  
int main()  
{  
    int i,j;  
	char a[3],t;  
    //gets的用法还需要再查查
	while(gets(a))  
    {  
        for(j=0; j<2; j++)  
            for(i=0;i<2;i++)  
            if(a[i]>a[i+1])  
            {  
                t=a[i];  
                a[i]=a[i+1];  
                a[i+1]=t;  
            }  
            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;  
    }  
    return 0;  
}  
