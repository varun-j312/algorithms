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
            if( ( (r==((row+1)/2)) || (r==((row+2)/2)) ) && ( (c==((col+1)/2)) || (c==((col+2)/2)) ) ) printf("0");
            else printf("1");
        }
        printf("\n");
    }
    return 0;
}
