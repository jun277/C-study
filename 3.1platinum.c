/*platinum.c -- your weight in platinum*/
#include<stdio.h>
int main(void)
{
    float weight;  //你的体重
    float value;  //相等重珠白金价值

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f",&weight);  //获取用户的输入
    value = 1700.0*weight*14.5833;  //假设白金的价格是毎盎司$1700
    //14.5833用于把英镑常衡盎司转换为金衡盎司
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("you are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    getchar();
    getchar();

    return 0;
}