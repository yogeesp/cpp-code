#include<iostream>
using namespace std;
 
int secondlargestNum(int ar[],int n){

    int largest=INT_MIN;
    for (int i=0;i<n;i++){
        if (largest<ar[i]){
            largest=ar[i];
        }
    }
    return largest;
}

int main()
{   int arr[10];
    int n;

    cout<<"Enter size of array ";
    cin>>n; 

    cout<<"Enter array: ";
    
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }

    cout<<"The largest number is "<<secondlargestNum(arr,n);

    return 0;
}