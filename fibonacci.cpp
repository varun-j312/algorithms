#include<iostream>
using namespace std;
int main()
{
int x1=-1,x2=1,x3,n,i;
cout<<"enter the number of terms";
cin>>n;
for(i=0;i<=n;i++)
   {
    x3=x1+x2;
    cout<<x3<<'\n';
    x1=x2;
    x2=x3;
   }
return 0;


}
