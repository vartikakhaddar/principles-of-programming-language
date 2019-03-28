#include <iostream>
using namespace std;
int main()
{
  int on, num, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> on;
  num = on;
  while(num != 0)
  {
      rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
  }
  if(sum == on)
    cout << on << " is an Armstrong number.";
  else
    cout << on << " is not an Armstrong number.";
  return 0;
}
