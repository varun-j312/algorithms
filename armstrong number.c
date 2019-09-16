#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    system("cls");
    int num,safe,nod=0,digit,sum=0;
    scanf("%d",&num);
    safe=num;
    while(num)
    {
        nod++;
        num=num/10;
    }
    num=safe;
    while(num)
    {
        digit=num%10;
        sum=sum+(float)pow(digit,nod);
        num=num/10;
    }
    if(sum==safe)
    {
        printf("%d is an armstrong number",safe);
    }
    else
    {
        printf("%d is not an armstrong number",safe);
    }
    return 0;

}
