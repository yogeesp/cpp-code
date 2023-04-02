#include <iostream>
using namespace std;
int main(){
int i,n=1,fact=1;
cout<<"Enter number:";
cin>>i;
for (;n<=i;n++)
{
    fact=fact*n;
}cout<<"The factorial is "<<fact;
}
