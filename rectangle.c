#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num,row,col;
    scanf("%d",&num);
    for(row=0;row<num;row++)
    {
        for(col=0;col<num;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
