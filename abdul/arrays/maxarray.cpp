#include <iostream>
using namespace std ;
int main(){
int A[5]={14,7,4,3,21};
int maxi=A[0];
for (int i=0;i<=5;i++){
    if (A[i]>maxi){
        maxi=A[i];
    }
}
cout<<maxi;
}
