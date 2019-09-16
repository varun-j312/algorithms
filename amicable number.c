#include<stdio.h>
#include<stdlib.h>
int main()
{

    system("cls");
    int num1,num2,fact,sof1=0,sof2=0;
    scanf("%d %d",&num1,&num2);
    for(fact=1;fact<num1;fact++)
    {
        if(num1%fact==0) sof1=sof1+fact;
    }
    for(fact=1;fact<num2;fact++)
    {
        if(num2%fact==0) sof2=sof2+fact;
    }
    if( (sof1==num2) && (sof2==num1) ) printf("%d %d are amicable numbers",num1,num2);
    else printf("%d %d are not amicable numbers",num1,num2);

    return 0;

}
