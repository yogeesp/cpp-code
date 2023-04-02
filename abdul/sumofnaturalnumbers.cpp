#include<iostream>
using namespace std;
int main()
{
int n,i=1,sum=0;
cout<<"Number of natural numbers till which the sum will be calculated: ";
cin>>n;
if (n<1){
    cout<<"Invalid";
}
else {for(;i<=n;i++)
{
    sum+=i;
}
cout<<"The sum is "<<sum;}

return 0;
}
