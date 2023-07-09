#include<stdio.h>
#include<conio.h>
int calculatePercentage(int Sci,int Math,int Eng);
int main(){
    int Sci,Math,Eng;
    printf("Enter marks of Sci,Math and Eng:");
    scanf("%d%d%d",&Sci,&Math,&Eng);
    int percentage =calculatePercentage(Sci,Math,Eng);
    printf("Percentage is %d",percentage);
return 0;
}
int calculatePercentage(int Sci,int Math,int Eng)
{
        return ((Sci+Math+Eng)/3);
}