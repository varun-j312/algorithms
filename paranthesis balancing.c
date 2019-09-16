 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int balancing(char* str,int len)
 {
     int i,count=0,bal=0;
     for(i=0;i<len;i++)
     {
         if(str[i]=='(') count++;
         else
         {
             if(count==0) return -1;
             else
             {
                 count--;
                 bal++;
             }
         }
     }
     return (count==0)?bal:-1;
 }
 int main()
 {
     int res;
     char str[100];
     scanf("%s",&str);
     int len=strlen(str);
     res=balancing(str,len);
     printf("%d",res);
     return 0;
 }
