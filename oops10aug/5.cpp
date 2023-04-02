#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
clrscr();
int a,b;
void swap(int &,int &);
cout<<"Enter two values:";
cin>>a>>b;

cout<<"nBefore swapping:na="<<a<<"tb="<<b;
swap(a,b);
cout<<"nnAfter swapping:na="<<a<<"tb="<<b;
getch();
}

void swap(int & x,int & y)
{
int temp;
temp=x;
x=y;
y=temp;
}
