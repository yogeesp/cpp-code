#include <iostream>
using namespace std;

int main() {
    //Write your code here
    char a;
    cin>>a;

    int new_a=(int)a;

    if (a>=65 && a<=90){
        return 1;
    }
    else if (a>=97 && a<=122){
        return 0;
    }
    else 
        return -1;
    return 0;
}