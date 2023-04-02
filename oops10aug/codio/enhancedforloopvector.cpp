#include <iostream>
#include <vector>
using namespace std;

int main() {
  //iterating a vector with Enhanced For Loop
vector<int> grades{85, 95, 48, 100, 92};

for (auto i : grades) { //can use int or auto for iterating variable!
 /* However, you can always use auto to force the
 variable to match your element type. */
  cout << i << endl;
}
  
  return 0;
  
}