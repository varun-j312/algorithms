#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num,row,col,space,star,gap;
    scanf("%d",&num);
    gap=num-1;
    for(row=0;row<num;row++)
    {
        for(space=gap;space>0;space--)
        {
            printf(" ");
        }
        for(star=0;star<num;star++)
        {
            printf("*");
        }
        gap=gap-1;
        printf("\n");
    }
    return 0;

}


