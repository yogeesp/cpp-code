#include<iostream>
using namespace std;

int fibonacci(int n){

    if (n<=1){
        return n;
    }
    else return fibonacci(n-1);
}
 
int main()
{
    int n=5;
    cout<<fibonacci;
    return 0;
}