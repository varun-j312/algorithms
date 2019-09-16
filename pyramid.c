#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,row,col,space,star;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(space=1;space<=num-row;space++)
        {
            printf(" ");
        }
        for(star=1;star<=2*row-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
