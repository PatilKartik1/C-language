#include<stdio.h>
#include<conio.h>
int fib(int n);
int main(){
    printf("%d",fib(6));
return 0;
}
int fib(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    
    int fibNM1=fib(n-1);
    int fibNM2=fib(n-2);
    int fibN = fibNM1 + fibNM2;
    //printf("fin of %d is %d\n",n,fibN);
    return fibN;
}

