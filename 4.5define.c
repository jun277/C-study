/*4.5define.c -- 使用limit.h和flaot.h头文件中定义的明示常量*/
#include <stdio.h>
#include <limits.h>  //整型限制
#include <float.h>   //浮点型限制

int main(void)
{
    printf("系统默认取值范围：\n");
    printf("最大整型int值:%d\n",INT_MAX);
    printf("最大整形 long long 值:%lld\n",LLONG_MAX);
    printf("最小长整型long long值:%lld\n",LLONG_MIN);
    printf("本系统 1 bye = %d bits \n",CHAR_BIT);
    printf("最大 double值:%e\n",DBL_MAX);
    printf("最小普通浮点值:%e\n",FLT_MIN);
    printf("浮点数度 = %d 位有效数字\n",FLT_DIG);
    printf("float epsilon = %e\n",FLT_EPSILON);

    return 0;
}
