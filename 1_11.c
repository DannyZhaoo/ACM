#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        bool flag=false;
        for(int i=a;i<=b;i++){
            if((pow(i%10,3)+pow((i/10)%10,3)+pow(i/100,3))==i){
                if(flag==false){
                    printf("%d",i);
                    flag=true;
                }
                else{
                    printf(" %d",i);
                }
            }
        }
        if(flag==false){
            printf("no\n");
        }
        else{
            printf("\n");
        }
    }
    return 0;
}
