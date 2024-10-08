#include<iostream>
using namespace std;

// functions for the conversion of decimal to binary

// int decToBin(int decNum)
// {
//   int ans = 0; int pow =1;

//   while(decNum>0)
//   {
//     int rem = decNum % 2 ;
//     decNum /=2;
//     ans += rem*pow ; 
//     pow *=10;
//   }
//   return ans;
// }


int binToDec(int binNum)
{
  int ans=0; int pow=1;
  while(binNum>0)
  {
    int rem = binNum % 10;
    binNum /=10;
    ans += rem * pow;
    pow = pow *2;
  }
  return ans;
}

int main()
{
  int number;
  cout<<"Enter a decimal number : ";
  cin>>number;
  // cout<<"The number in binary is : "<<decToBin(number);
  cout<<"The number in decimal is : " << binToDec(number);
}