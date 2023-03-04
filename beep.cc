#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //your code goes here
    for (int i = n; i >= 1; i--) {
    cout << i;
    if (i % 5 == 0) {
      cout << "\nBeep";
    }
    cout << endl;
   }
    
    return 0;
}
