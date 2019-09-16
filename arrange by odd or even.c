#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num,digit,even=0,odd=0,evenpower=1,oddpower=1,num1;
    scanf("%d",&num);
    while(num)
    {
        digit=num%10;
        if(digit%2==0)
        {
            even=digit*evenpower+even;
            evenpower=evenpower*10;
        }
        else
        {
            odd=digit*oddpower+odd;
            oddpower=oddpower*10;
        }
        num=num/10;
    }
    num1=even*oddpower+odd;
    printf("%d",num1);
    return 0;
}
