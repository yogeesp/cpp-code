#include <iostream>

using namespace std;

int main()
{ string a;
cout<<"Enter age:";
    cin>>a;
  int age=stoi(a);

if ((age>=1 && age<=18)||age==21||age==50||age>65)
{
    cout<<"Important birthday";
}
else  cout<<"Unimportant birthday";
}

