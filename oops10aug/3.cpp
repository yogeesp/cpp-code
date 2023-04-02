#include<iostream>
using namespace std;

void disp()
{
    for(int i=1;i<=80;i++){
        cout<<'*'<<" ";
    }
}
void disp(char c,int n)
{
    for(int i=1;i<=n;i++){
        cout<<c<<" ";
    }
}
int main()
{

    disp('$',10);
    printf("\n");
    disp();
    return 0;
}
