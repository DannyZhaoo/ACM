#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b<a)
			continue;
	 	long int x=0;//偶数的平方和
		long int y=0;//奇数的立方和
		for(int m=a;m <= b;m++){
			//余数是0
			if(m%2 == 0){
				x += m*m;
			}
			if(m%2 == 1){
				y += m*m*m;
			}

		}
		printf("%ld %ld\n",x,y);

	}
	return 0;
}
