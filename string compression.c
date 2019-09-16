#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[20],ch;
    scanf("%s",str);
    int len=strlen(str);
    int i,count;
    for(ch=str[0],i=1,count=1;i<len;i++)
    {
        if(ch==str[i]) count++;
        else
        {
            printf("%c",ch);
            if(count!=1) printf("%d",count);
            ch=str[i];
            count=1;
        }
    }
    printf("%c",ch);
    if(count!=1) printf("%d",count);
    return 0;

}
