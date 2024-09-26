#include<iostream>
using namespace std;

int isPrime()
{
  int number;
  cout<<"Enter a number : ";
  cin>>number;
  int counter=0;

  for(int num=2;num<=number;num++)
  {
    bool flag=true;

    for(int i=2;i*i<=num;i++)
    {
      if(num%i==0)
      {
        flag=false;
        break;
      }
    }

    if(flag)
    {
    cout<<num<<" ";
    counter=counter + 1;
    }
  }
  cout<<endl;
  cout<<"The total numbers are : "<<counter;
  
}

int main()
{
  isPrime();
}