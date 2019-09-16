#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    system("cls");
    int num,safe,nod=0,digit,sum=0,factorial,fact;
    scanf("%d",&num);
    safe=num;
    while(num)
    {
        digit=num%10;
        for(fact=1,factorial=1;fact<=digit;fact++)
        {
            factorial=factorial*fact;
        }
        sum=sum+factorial;
        num=num/10;
    }
    if(sum==safe)
    {
        printf("%d is a strong number",safe);
    }
    else
    {
        printf("%d is not a strong number",safe);
    }
    return 0;

}

