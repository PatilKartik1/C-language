#include<stdio.h>
#include<conio.h>
 void price(float value);
 int main(){
   float value;
   printf("Enter value:");
   scanf("%f",&value);
    price(value);
    return 0;

 }
 void price(float value){
    value = value -(0.18*value);
    printf("Price is %f",value);
 }