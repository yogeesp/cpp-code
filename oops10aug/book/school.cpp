#include <iostream>

using namespace std;

int main()
{
int age;
cout<<"Enter age:";
cin>>age;
if (age==5){
   cout<< "Kindergarten";
}
else if (age>=6 && age<=17){
    cout<<"Go to grade "<<age-5<<".";
}
else if (age<5){
    cout<<"Too young";
}
else cout<<"Go to college.";
return 0;
}
