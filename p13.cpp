#include<iostream>
using namespace std;

int convB(int number)
{
  int ans=0; int pow=1;

  while(number>0)
  {
    int rem = number % 2 ;
    number /= 2 ;
    ans += rem * pow;
    pow *= 10;
  }
  return ans;
}

int main()
{
  int num;
  cout<<"Enter a number in decimal : ";
  cin>>num;
  cout<<"The number in a binary form is : "<<convB(num);
}
