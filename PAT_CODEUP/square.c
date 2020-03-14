#include<stdio.h>
int main(){
    int length_a,length_b;
    char character;
    scanf("%d %c",&length_a, &character);
    if(length_a%2==0){
        length_b = length_a/2;
    }else{
        length_b = length_a/2+1;
    }
    int i,j;
    for(i=0;i<length_b; i++){
        if(i ==0 || i==length_b-1){
            for(j=0;j<length_a;j++)
            {
                printf("%c",character);
            }
            printf("\n");
        }else{
            printf("%c",character);
            for(j=0; j<length_a-2;j++){
                printf(" ");
            }
            printf("%c\n",character);
        }
    }
}