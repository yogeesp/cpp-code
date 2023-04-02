#include<iostream>
using namespace std;

float add(float a,float b){
    return a+b;
}

float subtract(float a,float b){
    return a-b;
}

float multiply(float a,float b){
    return a*b;
}

float divide(float a,float b){
    return a/b;
}

int main()
{   float a,b,res;
    int op;

    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your choice(1-5): ";
        cin>>op;
        if(op>=1 && op<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>a>>b;
        }
        switch(op)
        {
            case 1:
                res = add(a, b);
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = subtract(a, b);
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = multiply(a, b);
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = divide(a, b);
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong op!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(op!=5);
    cout<<endl;
 return 0;
}
