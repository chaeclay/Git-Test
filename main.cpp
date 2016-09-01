//CHARLES CLAYTON
#include <iostream>

using namespace std; 

int sum(int n){
  int total = 0;
  for(int i = 0; i < n; i++){
    total += i;
  }
  return total;
}

int main() {

  cout << "Hello World!" << endl;
  
  cout << "Enter an integer: ";
  int n = 0;
  cin >> n;

  cout << "The sum from 1 to " << n << " is: " << sum(n) << endl;
  
  
return 0; 
}
