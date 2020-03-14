#include<stdio.h>
int step=-1;

int callatz(int n){
    step++;
    if(n==1){
        return step;
    }else if(n%2==0){
        return callatz(n/2);
    }else{
        return callatz((3*n+1)/2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",callatz(n));
}
