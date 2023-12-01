#include<iostream>
using namespace std;

int main(){
  int input;
  cout << "Enter an integer: ";
  cin >> input;
  int even = 0;
  int odd = 0;

  while (input != 0) {
    if (input % 2 == 0) even++;
    else odd++;

    cout << "Enter an integer: ";
    cin >> input;
  }
  cout << "#Even numbers = " << even << '\n';
  cout << "#Odd numbers = " << odd;
  return 0;
}
