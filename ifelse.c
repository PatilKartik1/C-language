#include<stdio.h>
#include<conio.h>
int main()
{
int marks;
printf("Enter Marks:");
scanf("%d",&marks);

if (marks >= 0 && marks<=35)
{
    printf("fail");
}else if (marks>35 && marks<=100)
 {
    printf("pass");
} else{
    printf("Enter valid marks");
}


  return 0;
}