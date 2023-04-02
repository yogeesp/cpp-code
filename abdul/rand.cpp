#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int val, res, n = 1000;
cin>>val;
res = n + val > 170 ? 400 : 200;
cout<<res;
return 0;
}
