//Find the smallest element in an array

#include<iostream>
using namespace std;
 
int smallestNum(int ar[],int n){

    int smallest=INT_MAX;
    for (int i=0;i<n;i++){
        if (smallest>ar[i]){
            smallest=ar[i];
        }
    }
    return smallest;
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

    cout<<"The smallest number is "<<smallestNum(arr,n);

    return 0;
}