#include<stdio.h>
int main(){
    int n,stuNum,grade;
    scanf("%d",&n);
    int a[n]={0};
    for(int i=0;i<n;i++){
        scanf("%d%d",&stuNum,&grade);
        a[stuNum-1]+=grade;
    }
    int max=a[0],t=1;
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
            t = i+1;
        }
    }
    printf("%d %d",t,a[t-1]);
}