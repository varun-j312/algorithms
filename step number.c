#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num,save,d1,d2,flag=0,count=0;
    scanf("%d",&num);
    save=num;
    while(num)
    {
        num=num/10;
        count++;
    }
    //printf("%d\n",count);
    num=save;
    for(;count>1;count--)
    {
        d1=num%10;
        d2=(num/10)%10;
        printf("%d\t%d\n",d1,d2);
        if(abs(d1-d2)!=1)
        {
            flag=1;
            break;
        }
        num=num/10;
    }
    if(flag==0) printf("Yes");
    else printf("No");
    return 0;
}
