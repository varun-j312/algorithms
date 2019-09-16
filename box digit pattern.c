#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int row,col,r,c;
    scanf("%d %d",&row,&col);
    for(r=1;r<=row;r++)
    {
        for(c=1;c<=col;c++)
        {
            if(r==1||r==row||c==1||c==col) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}

