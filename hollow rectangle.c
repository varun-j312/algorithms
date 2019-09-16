#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num,row,col;
    scanf("%d",&num);
    for(row=0;row<num;row++)
    {
        if(row==0||row==num-1)
        {
            for(col=0;col<num;col++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for(col=0;col<num-2;col++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }
    return 0;

}

