#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)
			continue;
		double *p=malloc(sizeof(double)*n);
		for(int i=0;i<n;i++)
			scanf("%lf",p+i);
		int a=0;//-
		int b=0;//0
		int c=0;//+
		for(int i=0;i<n;i++){
			if(p[i]<0){
				a++;
			}else if(p[i]==0){
				b++;
			}else{
				c++;
			}
		}
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
