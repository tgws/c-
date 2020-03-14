#include <stdio.h>
int month[][2] = {0, 0, 31, 31, 28, 29, 31, 31, 30, 30, 31, 31, 30, 30, 31, 31, 31, 31, 30, 30, 31, 31, 30, 30, 31, 31};
int isLeap(int year)
{
     if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
         return 1;
     }else{
         return 0;
     };
}
int main()
{
    int timea, timeb, temp;
    int yeara, yearb, montha, monthb, daya, dayb;
    int account = 1;
    while (scanf("%d%d", &timea, &timeb) != EOF)
    {
        //20150304
        account = 1;
        if (timea > timeb)
        {
            temp = timea;
            timea = timeb;
            timeb = temp;
        }
        yeara = timea / 10000, montha = (timea % 10000) / 100, daya = timea % 100;
        yearb = timeb / 10000, monthb = (timeb % 10000) / 100, dayb = timeb % 100;
        while (yeara < yearb || montha < monthb || daya < dayb)
        {
            daya++;
            if (daya == month[montha][isLeap(yeara)] + 1)
            {
                montha++;
                daya = 1;
                if (montha == 13)
                {
                    yeara++;
                    montha = 1;
                }
            }
            account++;
        }
        printf("%d\n", account);
    }
    return 0;
}
