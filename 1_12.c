#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        int *p=malloc(a*sizeof(int));
        //输入
        for(int i=0;i<a;i++){
            scanf("%d",p+i);
        }
        for(int i=0;i<a;i++){
            double s=0;
            //处理每一个输入的数字
            for(int j = 1 ;j <= p[i];j++){
                //如果是偶数
                if(j%2==0){
                    s -= 1.0/j;
                }else{//基数
                    s += 1.0/j;
                }
            }
            printf("%.2lf\n",s);
        }
    }
    return 0;
}



