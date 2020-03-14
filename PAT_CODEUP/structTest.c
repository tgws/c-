#include<stdio.h>
int main(void){
    struct Student{
        long int num;
        char name[20];
        char sex;
        char addr[20];
    }xiaoming={10086,"xiaoming",'M',"123 Beijing Road"};
    printf("%ld %s %c %s",xiaoming.num, xiaoming.name,xiaoming.sex,xiaoming.addr);
    return 0;
}