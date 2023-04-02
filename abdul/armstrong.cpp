// In case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal 
// to the number itself. 
#include <iostream>
using namespace std;
int main(){
int n,r,sum=0,j;
cout<<"Enter Number:";
cin>>n;
j=n;
 while(n>0){
    r=n%10;
    n=n/10;
    sum+=r*r*r;
}if (sum==j){
    cout<<"Armstrong";}
else cout<<"Not Armstrong";
return 0;
}
