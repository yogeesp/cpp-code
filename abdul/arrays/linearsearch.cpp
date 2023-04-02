#include<iostream>
using namespace std;
int main()
{
    int A[6],n=6,i,key=0;
    cout<<"Enter numbers: ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if (key==A[i]){
           cout<<"Key found at position "<<i+1; 
           return 0;
        }
    }
    cout<<"Not found";
 return 0;
}