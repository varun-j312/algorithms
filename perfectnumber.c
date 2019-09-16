#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()       // why scanf is not working???
{

    system("cls");
    int i,num,sof=1;
    scanf("%d",&num);
    for(i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            sof+=num/i;
            sof+=i;
        }
    }
    if(num%i==0)
    {
        sof+=i;
    }
    printf("%d",sof);
    if(sof==num)printf("\n%d is a perfect number",num);
    else if(sof>num)printf("\n%d is an abundant number",num);
    else if(sof<num)printf("\n%d is a deficient number",num);
    return 0;
}
