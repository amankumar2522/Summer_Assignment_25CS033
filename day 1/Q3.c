#include<stdio.h>
int main(){
    int fact,i;
    printf("enter a number");
    scanf("%d",&fact);
    for(i=1;i<=fact;i++){
        fact  =fact*i;

    }
    printf("factorial of the given number is %d \n",fact);
    return 0;
}