#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num,row,col;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++) printf("%d",col);
        for(col=1;col<=(2*num-2*row);col++) printf(" ");
        for(col=row;col>=1;col--) printf("%d",col);
        printf("\n");
    }
    return 0;
}

