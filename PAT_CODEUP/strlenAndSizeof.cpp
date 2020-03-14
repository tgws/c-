#include<stdio.h>
#include<string.h>
int main(){
    char a[10] = "hello";
    puts(a);
    printf("sizeof: %d\nstrlen: %d",sizeof(a), strlen(a));
    return 0;
}