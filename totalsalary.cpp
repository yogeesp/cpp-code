#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int basic,salary,allow;
    float hra,da,pf;
    char grade;
    
    cin>>basic>>grade;

    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;

    switch(grade){
        case 'A':
            allow=1700;
            break;
        case 'B':
            allow=1500;
            break;
        default:
            allow=1300;
            break;
    }

    salary=round(basic+hra+da+allow-pf);

    cout<<salary;
    return 0;
}