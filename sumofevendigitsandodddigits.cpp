#include <iostream>
using namespace std;

int main() {
    //Write your code here

    int n;
    cin>>n;

    int eve=0;
    int odd=0;

    while(n>0){
        int a=n%10;
        
        if(a%2==0){
            eve+=a;
        }

        else odd+=a;
        n /=10;
    }

    cout<<eve<<" "<<odd;
    return 0;
}