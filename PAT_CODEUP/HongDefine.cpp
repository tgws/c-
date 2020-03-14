#include<stdio.h>
#define MINUS(a,b) ((a)-(b))
int main(){
    int num1 = 3, num2 = 4;
    printf("%d\n",MINUS(num1,num2));
    int m = 3;
    m %= 2;
    printf("%d", m);
    return 0 ;
}