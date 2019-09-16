#include<stdio.h>
#include<stdlib.h>
int main()
{

    system("cls");
    int num1,num2,fact,sof=0;
    scanf("%d %d",&num1,&num2);
    for(fact=1;fact<num1;fact++)
    {
        if(num1%fact==0) sof=sof+fact;
    }

    if( sof==(num2+1) ) printf("%d %d are betrothed numbers",num1,num2);
    else printf("%d %d are not betrothed numbers",num1,num2);

    return 0;

}

