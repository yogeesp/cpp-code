#include<iostream>
using namespace std;

int main(){
float basicSal,ap,dp,netSal;
cout<<"Enter basic Salary:";
cin>>basicSal;
cout<<"Enter allowance percent:";
cin>>ap;
cout<<"Enter deduction percent:";
cin>>dp;
netSal=basicSal+(basicSal*ap)/100-(basicSal*dp)/100;
cout<<"The net salary is"<<netSal;
}
