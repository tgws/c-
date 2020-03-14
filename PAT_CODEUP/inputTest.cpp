//---------------------------------------------------------------------------------------------------------------
//输入时间
/* #include<stdio.h>
int main(){
    int hh,mm,ss;
    scanf("%d:%d:%d",&hh,&mm,&ss);
    printf("现在是北京时间:%02d时%02d分%02d秒",hh,mm,ss);
    return 0;
}
 */
//---------------------------------------------------------------------------------------------------------------
/* #include<stdio.h>
int main(){
    int a;
    char c,str[10];
    scanf("%d%c%s", &a,&c,str);
    printf("a=%d,c=%c,str=%s", a, c, str);
    return 0;
}
 */
//---------------------------------------------------------------------------------------------------------------
/* #include<stdio.h>
int main(){
    int a[10] = {5,3,2,6,8,4};
    for (int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
} */
//-------------------------------------------------------------------------------------------------------------
//冒泡排序
/* #include<stdio.h>
int main(){
    int a[10] = {2,3,1,44,5,33,2};
    //共进行n-1趟
    for(int i=1; i<7; i++){
        //每一趟比较n-i次
        for(int j=0; j<7-i; j++){
            //change a[j] a[j+1]
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
       }
    }
    for(int i=0; i<7; i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}
 */
//strlen strcmp strcpy strcat--------------------------------------------------------------------------------------------------------
//
/* 
#include<stdio.h>
#include<string.h>
ain(){
    char str[10];
    gets(str);
    printf("%d",strlen(str));
    return 0;
}
 */
//-------------------------------sscanf sprintf---------------将对象从screen替换为了str字符串--------------------------------------------------
/* #include<stdio.h>
int main(){
    int n = 12;
    double db = 3.1415;
     char str[100],str2[200] = "good";
     sprintf(str,"int:%d\ndouble:%.2f\nstring:%s", n, db, str2);
     printf("%s",str);
}
 */
//-------------------------------------------------------------
/* #include<stdio.h>
int main(){
    int a[10];
    for(int i=0; i<10; i++){
        scanf("%d", a+i);
    }
    for(int*p=a;p<a+10; p++ ){
        printf("%d ",*p);
    }
} */
//------------------------指针的引用-----------------------------
/* #include<stdio.h>
void change(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 1, b = 2;
    int *m = &a, *n = &b;
    change(m,n);
    printf("a=%d, b=%d", a, b);
} */

//---------------------------------------结构体
/* #include<stdio.h>
struct studentInfo
{
    int id;
    char gender;
    char name[20];
    char major[20];
};
int main(){
    studentInfo Alice;
    studentInfo stu[200];
    Alice.gender = 'F';
}
 */

//--------------------
/* #include<stdio.h>
struct Point{
    int x,y;
    Point(){}
    Point(int _x, int _y): x(_x), y(_y){}
}pt[10];
int main(){
    int num = 0;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            pt[num++] = Point(i,j);
        }
    }
    for(int i=0; i<num; i++){
        printf("%d,%d\n",pt[i].x,pt[i].y);
    }
    return 0;
} */
#include<stdio.h>
int main(){
    int n;
    int a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&a, &b);
        printf("%d\n",a+b);
    }
    return 0;
}
