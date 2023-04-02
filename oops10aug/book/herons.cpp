#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,s,area;
    cout<<"Enter length of sides: ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area= sqrt((s*(s-a)*(s-b)*(s-c)));
cout<<"The area is "<<area;
return 0;

}
