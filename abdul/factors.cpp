#include <iostream>
using namespace std;
int main(){
int n,i=1;
cout<<"Enter number ";
cin>>n;
cout<<"The factors are ";
 for(;i<=n;i++)
 { if (n%i==0){
   cout<< i<<",";}
 }
}
