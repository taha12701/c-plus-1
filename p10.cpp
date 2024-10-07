#include<iostream>
using namespace std;

int dectoBinary(int number)
{
  int pow=1;
  int ans=0;
  while(number>0)
  {
    int rem = number % 2 ;
    number /=2;
    ans +=rem * pow;
    pow *=10;
  }
  return ans;

}
int main()
{
 int number = 50;
 cout<<dectoBinary(number);

}