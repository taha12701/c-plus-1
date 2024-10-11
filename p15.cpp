#include<iostream>
using namespace std;

int main()
{
  int number;
  cout<<"Enter a number : ";
  cin>>number;
  int rev_digit = 0;

  while(number>0)
  {
    int rem = number % 10;
    rev_digit = (rev_digit*10) + rem;
    number /=10;
  }
  cout<<"The reverse of a number is : "<<rev_digit;
}