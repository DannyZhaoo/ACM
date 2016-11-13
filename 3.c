#include<stdio.h>
#define PI 3.1415927
int main(){
	double v,q;
	while(scanf("%lf",&v)!=EOF){
		q=4*PI*v*v*v/3;
		printf("%.3lf\n",q);

	}
	return 0;

}
