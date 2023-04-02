#include<iostream>
using namespace std;
int main()
{string test[] = {"First test: ", "Second test: ", "Third test: "};
int b= (sizeof test)/(sizeof test[0]);
int scores[3];
scores[0] = 84;
scores[1] = 76;
scores[2] = 97;
 int c= (sizeof test)/(sizeof test[0]);
 for(string i : test && int j:scores){

  cout << i << j << endl;
  
 }
   
   

 return 0;
}