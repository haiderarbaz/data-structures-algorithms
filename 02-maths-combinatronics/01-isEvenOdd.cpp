#include <iostream>
using namespace std;

bool isEven(int n){
  return (n%2==0);
}

int main(){
  int a; 
  cout << "Enter a Number: ";
  cin >> a;

  isEven(a) ? cout << "Even Number" : cout << "Odd Number"; 

  return 0;
}