#include<iostream>
using namespace std;
#include<sstream>
// int printHello()
// {
//   cout<<"Hello World"<<endl;
//   return 4;
// }
// int printSum(int a, int b)
// {
//   int sum= a + b;
//   // return sum;
//   cout<<sum;

// }

// int minValue(int a, int b)
// {
//   if(a>b)
//   {
//     return b;
//   }
//   else{
//     return a;
//   }
// }

// int sumValue(int n)
// {
//   int sum = 0;
//   for(int i=1;i<=n;i++)
//   {
//     sum=sum+i;
//   }
//   return sum;
// }

// int factorial(int n){
//   int fact=1;
//   ostringstream oss;
//   for(int i=n;i>=1;i--)
//   {
//     fact=fact*i;
//   }
//   oss<<"Factorial of "<<n<<" is : "<<fact;
//   cout<<oss.str();
// }

// int sumofDigit(int n)
// {
//   int sum = 0;
//   while(n>0)
//   {
//     int rem=n%10;
//     n=n/10;
//     sum=sum+rem;
//   }
//   return sum;
// }

// int binomial(int n, int r)
// {
//   // first we have to create n!

//   int f1=1;
  
//   for(int i=1;i<=n;i++)
//   {
//     f1=f1*i;
//   }
 
//    // first we have to create r!

//   int f2=1;
//   for(int i=1;i<=r;i++)
//   {
//     f2=f2*i;
//   }

//   // first we have to create (n-r)!

//   int f3=1;
//   for(int i=1;i<=n-r;i++)
//   {
//     f3=f3*i;
//   }

//   int binom=((f1)/(f2)*(f3));

//   return binom;
// }

int factorial(int n)
{
  int fact=1;
  for(int i=1;i<=n;i++)
  {
    fact*=i;
  }
  return fact;
}

int nCr(int n,int r)
{
  int n_fact=factorial(n);
  int r_fact=factorial(r);
  int nm_r=factorial(n-r);

  return (n_fact)/(r_fact* nm_r);
}
int main()
{
  // int small=minValue(7,11);
  // cout<<small;
  // cout<<printHello()<<endl;
  // printSum(6,9);
  // int number = sumValue(15);
  // cout<<"The sum of the numbers are "<<number;
  // factorial(8);
  // cout<<"The sum of numbers are : "<<sumofDigit(123);
  // cout<<"The binomial coefficeint is : "<<binomial(8,2);
  cout<<nCr(8,2);
}