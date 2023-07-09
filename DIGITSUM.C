#include<stdio.h>
#include<conio.h>
int main(){
int num,remainder,sum=0;
printf("Enter num:");
scanf("%d",&num);
for ( int num = 0; num>0;num++)
{
    remainder=num%10;
    sum+=remainder;
    num=10;
    printf("sum id %d",num);
    return 0;

}
}