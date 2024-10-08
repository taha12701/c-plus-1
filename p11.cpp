#include<iostream>
using namespace std;

int binToDec(int number)
{
  int pow=1;
  int ans=0;
  while(number>0)
  {
    int rem = number % 10;
    ans += rem * pow;
    number = number /10;
    pow = pow *2;
  }
  return ans;
}

int main()
{
  cout<<binToDec(101110101);
}