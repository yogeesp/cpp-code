#include<iostream>
using namespace std;
int main()
{
    int i=1,j=2,sum=0,s;
    while(s<4000000 ){
        s=i+j;
        if (s%2==0 ){
        sum+=s;
       }
       i++,j++;
    }
    cout<<sum;
 return 0;
}