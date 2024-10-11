#include<iostream>
using namespace std;


int x=10;

int foo()
{
  cout<<x<<endl;
}
int call()
{
  cout<<x<<endl;
}
int main()
{ 
  // int a = 10 ; int b = 7;
  // cout<<(10<<1)<<endl;
  // cout<<(10>>2);
  // cout<<(6&10)<<endl;
  // cout<<(6|10)<<endl;
  // cout<<(6^10)<<endl;
  // cout<<(10>>1)<<endl;
  // foo();
  // call();

  cout<<sizeof(int)<<endl;
  cout<<sizeof(long long int)<<endl;
  cout<<sizeof(long int)<<endl;
  cout<<sizeof(short int)<<endl;

}