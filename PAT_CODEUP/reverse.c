#include <stdio.h>
#include<string.h>
int main()
{
    //逆置 apple a[0]=a a[1] p a[2] p a[3] l a[4] e    a
    char a[256],b[256];
    scanf("%s", a);
    //拷贝到b, 对a置换后得到a',比较a'和b
    strcpy(b,a);
    int i = 0;
    //计算数组长度 strlen可以代替 （傻叉了）
    while (a[i] != '\0')
    {
        i++;
    }
    printf("sizeof:%d\nstrlen:%d\nHuiWen Num: ",sizeof(a),strlen(a));
    // i=5
    int length = i;
    int j,temp;
    for (j = 0; j < length / 2; j++,i--)
    {
        temp = a[j];
        a[j] = a[i-1];
        a[i-1] = temp;
    }
    int cmp = strcmp(a,b);
    if(cmp == 0){
        printf("YES");
    }else{
        printf("NO");
    }
}