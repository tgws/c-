//测试c++中sort函数，需要引入algorithm。
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[5] = {3,1,5,4};
    sort(a,a+5);
    for(int i=0; i<4; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
