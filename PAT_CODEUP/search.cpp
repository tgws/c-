#include<stdio.h>
int main(){
    int n,k,tag=-1;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", a+i);
    }
    scanf("%d", &k);
    for(int i=0; i<n; i++){
        if(a[i] == k){tag = i;}
    }
    printf("%d", tag);
}