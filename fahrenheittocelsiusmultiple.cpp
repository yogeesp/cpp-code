#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here

    int s,e,w;
    cin>>s>>e>>w;

    for(;s<=e;s+=w){
        
        int cel=(s-32)*5/9;

        if (cel >0){
            cel = floor(cel);
        }

        else (cel = ceil(cel));

        cout<<s<<" "<<cel<<endl;
        
    }
    return 0;
}