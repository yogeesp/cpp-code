#include<iostream>
using namespace std;
inline int sqr(int x)
{
    return x*x;
}
inline int cube(int x)
{
    return x*x*x;
}
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Square of the number : "<<sqr(x)<<endl;
    cout<<"Cube of the number : "<<cube(x);
    return 0;
}
