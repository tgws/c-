//PATB1020
#include <cstdio>
#include <algorithm>
using namespace std;
struct mooncake
{
    double store; //库存量
    double sell;  //总售价
    double price; //单价
} cake[1010];
bool cmp(mooncake a, mooncake b)
{
    return a.price > b.price;
}
int main()
{
    int moon_kind_num; //月饼种类数量
    double total_need; //市场总需求量
    scanf("%d %lf", &moon_kind_num, &total_need);
    for (int i = 0; i < moon_kind_num; i++)
    {
        //读入每种月饼库存量
        scanf("%lf", &cake[i].store);
    }
    for (int i = 0; i < moon_kind_num; i++)
    {
        //读入每种月饼总售价
        scanf("%lf", &cake[i].sell);
        //计算单价
        cake[i].price = cake[i].sell / cake[i].store;
    }
    sort(cake, cake + moon_kind_num, cmp); //对每种月饼按照单价从高到低排序
    double profit = 0;                     //总收益
    for (int i = 0; i < moon_kind_num; i++)
    {
        if (cake[i].store <= total_need) //如果需求量大于这种（i）月饼库存量
        {
            total_need -= cake[i].store; //将i种月饼全部卖出
            profit += cake[i].sell;
        }
        else
        {
            profit += cake[i].price * total_need;
            break;
        }
    }
    printf("%.2f", profit);
    return 0;
}