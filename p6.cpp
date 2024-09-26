#include<iostream>
using namespace std;

// function for checking the prime number


int isPrime()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  bool flag=true;
  for(int num=2;num<=n;num++)
  {
    for(int i=1;i*i<=num;i++)
    {
      if(num%i==0)
      {
        flag=false;
        break;
      }
    }
  }
   if(flag)
  {
    cout<<"A Prime Number ";
  }
  else{
    cout<<"A non Prime Number ";
  }
}

int main()
{
  isPrime();
}