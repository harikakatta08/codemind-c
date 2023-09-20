#include<stdio.h>
int main()
{
    int i,a,b,sum=0,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(i=a;i<=b;i++){
        if(i%x==0&&i%y!=0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
    