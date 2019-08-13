//1.13 unit conversion.c 单位换算
#include <stdio.h>
int main(void)
{
    int inch;
    int cm;
    cm = inch * 2.54;

    printf("此小程序将把您输入的英寸自动转换成厘米，");
    printf("请输入要转换英寸的数值：\n");

    scanf("%d",&inch);
    printf("您输入的数值转换后为 %d 厘米。\n",cm);
    getchar();
    return 0;
}
