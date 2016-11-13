#include<stdio.h>
#include<stdlib.h> //开辟内存
int main(){
	int n;//个数
	while(scanf("%d",&n)!=EOF){
	 	int *p=malloc(sizeof(int)*n);
		int a=1;//累乘的数
		for(int i=0;i<n;i++)
			scanf("%d",p+i);
		for(int i=0;i<n;i++){
			//位运算，让数与1，结果就能知道最后一位是1或是0
			if(p[i]&1==1){
				a = a * p[i];
			}

		}
		printf("%d\n",a);
		free(p);
	}
	return 0;
}
