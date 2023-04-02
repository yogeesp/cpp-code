#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //add code below this line
 vector<string> letters(0);
letters.push_back("A");
letters.push_back("B");
letters.push_back("C");
letters.push_back("D");
letters.push_back("E");
    
int original = letters.size(); //original size
    
//regular for loops needed to access element indices

for (int i = letters.size() - 1; i >= 0; i--) {
  letters.push_back(letters.at(i));
} //add elements in reverse order to the vector
    
for (int j = 0; j < original; j++) {
  letters.erase(letters.begin());
} //remove all the original elements

//enhanced for loop can be used for just printing
for (auto a : letters) {
  cout << a << " "; //print all new vector elements
}

  //add code above this line
  
  return 0;
  
}