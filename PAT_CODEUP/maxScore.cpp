#include<stdio.h>
const int maxn = 100010;
int school[maxn] = {0};
int main(){
    int n, schid, score;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d",&schid, &score);
        school[schid]+=score;
    }
    int k=1, max = -1;
    for(int i=1; i<=n; i++){
        if(school[i]>max){
            max = school[i];
            k = i;
        }
    }
    printf("%d %d", k, max);
}