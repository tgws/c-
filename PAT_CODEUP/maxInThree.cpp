#include<stdio.h>
int max(int a, int b){
    return a>b?a:b;
}
int main(){
    int a,b,c;
    printf("Please input three nums:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max(max(a,b),c));
    return 0;
}