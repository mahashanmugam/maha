#include<stdio.h>
#include<conio.h>
int main(){
int n,i,sum=0;
printf("enter a positive integer:");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+1;
printf("sum=%d",sum);return 0;
}
