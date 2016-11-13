#include<stdio.h>
#include<math.h>
int main(){
	int a,b,sum1,sum2;
	while(scanf("%d %d",&a,&b)!=EOF){
		sum1=0;
		sum2=0;
		for(int i=a;i<=b;i++){

			if(i%2==0)
				sum1 += pow(i,2);
			if(i%2==1){
				sum2 += pow(i,3);
			}
		}
		printf("%d %d\n",sum1,sum2);
	}

	return 0;
}
