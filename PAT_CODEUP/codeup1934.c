#include<stdio.h>
int main(){
    const int maxn = 201;
    int a[maxn];
    int i, n, x;
    while(scanf("%d",&n)!=EOF){
    ;
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0; i<n; i++){
        if(a[i]==x)break;
    }
    if(i==n){printf("-1\n");}else{
    printf("%d\n",i);
    }
    }
        return 0;
}