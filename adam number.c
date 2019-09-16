#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    system("cls");
    int num,snum,rev=0,srev,numdigit,revdigit,safe,check=0;
    scanf("%d",&num);
    safe=num;
    snum=num*num;
    while(num)
    {
        numdigit=num%10;
        rev=rev*10+numdigit;
        num=num/10;
    }
    srev=rev*rev;
    while(srev)
    {
        revdigit=srev%10;
        check=check*10+revdigit;
        srev=srev/10;
    }
    if(check==snum)printf("%d is an adam number",safe);
    else
        printf("%d is not an adam number",safe);
    return 0;

}

