#include<stdio.h>
int main()
{
    int i,M,N;
    scanf("%d%d",&M,&N);
    for(i=M;i<=N;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}