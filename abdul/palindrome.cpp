#include <iostream>
using namespace std;
int main()
{ int num,n,digit,rev=0;
 cout<<"Enter number: ";
 cin>>num;
 n=num;
  while (num!=0){
      digit=num%10;
      rev=(rev*10)+digit;
      num=num/10;}
 cout<<rev<<endl;
 if (rev==n)
     cout<<"Number is a palindrome.";
 
 else cout<<"Number is not a palindrome.";
 
 return 0;
}
