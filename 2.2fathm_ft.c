//2.2fathm_ft.c --把2音寻转换成英寸
#include<stdio.h>
int main(void)
{
    int feet,fathons;
    fathons = 2;
    feet = 6*fathons;

    printf("There are %d feet in %d fathons!\n",feet,fathons);
    printf("Yes,I said %d feet!\n",6*fathons);

    return 0;
}
