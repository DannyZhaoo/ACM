#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		double n=a;//累乘
		double temp=sqrt(a);
		for(int i=1;i<b;i++){
			n += temp;
			temp=sqrt(temp);
		}
		printf("%.2lf\n",n);
	}
	return 0;
}
