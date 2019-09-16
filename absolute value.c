#include<stdio.h>
#include<stdlib.h>

int absolute(int num)
{
    return (num<0?-num:num);
}
int main()
{
    system("cls");
    int num;
    scanf("%d",&num);
    printf("%d",absolute(num));
    return 0;
}

