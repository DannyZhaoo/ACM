#include<stdio.h>
int main(){
	int a;//成绩
	while(scanf("%d",&a)!=EOF){
		if(a>100)
			printf("Score is error!\n");
		else if(a>=90)
			printf("A\n");
		else if(a>=80)
			printf("B\n");
		else if(a>=70)
			printf("C\n");
		else if(a>=60)
			printf("D\n");
		else if(a>=0)
			printf("E\n");
		else
			printf("Score is error!\n");
	}
	
	return 0;
}
