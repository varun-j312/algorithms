#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num,safe,nod=0,store,digit,rev=0,res=0,num1;
    scanf("%d",&num);
    safe=num;
    while(num)
    {
        nod++;
        num=num/10;
    }
    num=safe;
    if(nod%2!=0)
    {
        store=num%10;
        num=num/10;
    }
    while(num)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    while(rev)
    {
        num1=rev%100;
        res=res*100+num1;
        rev=rev/100;
    }
    if(nod%2!=0) res=res*10+store;
    printf("%d",res);
    return 0;
}
