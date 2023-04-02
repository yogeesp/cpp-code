#include<iostream>
using namespace std;
int main() {
string letters[] = {"A", "B", "C", "D", "E"};
int elements = sizeof(letters) / sizeof(letters[0]); //number of elements

//start at index 4, then decrement by 1 until i < 0, then stop
for (int i = elements - 1; i >= 0; i--) {
  cout << letters[i] << endl;
 }

//regular for loop needed to access each element index

 return 0;
}