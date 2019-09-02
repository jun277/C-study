
/*test1.年龄转换
#include<stdio.h>
  int main(void)
[[{
            int sec = 3.156e7;
            int age = 40;

            printf("If your ages is 40,change to second is : %d sec.",age*sec);

            return 0;
        }
        */


/*
test2.编写一个程序，发出一声警报，然后打印下面的文本：
#include <stdio.h>
int main(void)
    {
        printf("\a Startled by the sudden soun,Sally shouted,\n");
        printf("\"By the Great Pumpkin,what was that!\"");
        return 0;
     }*/

/*
  test3.编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形貌。然后，如果系统支持，再打印成P变法（即十六进制变法）。
#include <stdio.h>
int main(void)
{
    float num_f = 365.23;
    printf("如果一个数字为：%f\n",num_f);
    printf("转换成指数形式为：%e\n",num_f);
    printf("转换成P记数法为：%x\n",num_f);
    return 0;
}×/

/*
test4.1个水分子的质量约为3.0x10-23克，1夸脱水大约是950克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/
/*
>#include <stdio.h>
int main(void)
{
    float WT = 3.0e-23;
    float WM = 950.0;
    float KT;

    printf("请输入要计算夸脱数：");
    scanf("%f",&KT);
    printf("\n%.2f夸脱水的重量为：%.2f克\n",KT,KT*WM);
    printf("一共含有水分子数量为：%.f个。\n",KT*WM/WT);

    getchar();

    return 0;
}
*/

/*
test5.一年大约有3.156x10的7次方秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
*/
/*
#include<stdio.h>
int main(void)
{
            long int sec = 3.156e7;
            int age;

            printf("请输入你的年龄：");
            scanf("%d",&age);
            printf("你的年龄是：%d 岁，相当于%ld 秒\n",age,age*sec);

            getchar();
            return 0;
}
*/
