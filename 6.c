#include<stdio.h>
int main(){
	int year,month,day;
	int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
		//判断输入月份的合理性
		if(month > 12 || month < 1 )
			continue;//本次循环从这跳过，直接进入下次循环
		if(day < 1 || day > month_day[month-1])
			continue;
		if((year%400==0)||(year%10!=0&&year%4==0))//判断闰年的条件
		{
			month_day[1]=29;
		}
		else{
			month_day[1]=28;
		}
		int count=0;
		//计算的月份是小于你输入的月份的，还有因为数组的第一个位置用a[0]，所以还要注意数量关系
		for(int i=0;i<month-1;i++){
			count += month_day[i];
		}
		count += day;
		printf("%d\n",count);
	}
	return 0;

}
