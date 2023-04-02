#include <iostream>
#include <vector>
using namespace std;

int main() {
 
//iterating through an vector
vector<int> grades{85, 95, 48, 100, 92};

for (int i = 0; i < grades.size(); i++) {
  cout << grades.at(i) << endl;
}


  
  return 0;
  
}