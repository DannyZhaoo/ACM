#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
bool isPrime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)
            return false;
    }
    return true;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    //满足输入条件
    while(!(x==0&&y==0)){
        for(int i=x;i<=y;i++){
            if(!isPrime(pow(i,2)+i+41))
                break;
            if(i==y)
                printf("OK\n");
        }
        scanf("%d %d",&x,&y);
    }
    return 0;
}



