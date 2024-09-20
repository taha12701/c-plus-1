#include <iostream>
using namespace std;

// this is the starting main
int main()
{
  // cout<<"Hello World";

  // int age=25;
  // cout<<age<<endl;

  // bool is_safe=true;
  // cout<<is_safe<<endl;

  // char value=age;
  // cout<<value<<endl;

  // double price=103.87;
  // int new_price=price;
  // cout<<new_price<<endl;

  // int age;
  // cout<<"Enter your age ";
  // cin>>age;
  // cout<<"your age is : "<<age<< endl;

  // int a=24, b=5;
  // int sum = a+b;
  // cout<<"Sum = "<<sum<<endl;
  // cout<<"differce = "<<(a-b)<<endl;
  // cout<<"product = "<<(a*b)<<endl;
  // cout<<"devision = "<<(a/b)<<endl;
  // cout<<"modulo = "<<(a%b)<<endl;


  // int a =25;
  // int b = 4;
  // // int ans = (a/ double(b));
  // cout<< a/ double(b);

  // int marks;
  // cout<<"Enter your marks ";
  // cin>>marks;

  // if(marks>=90){
  //   cout<<"Grade is A+";
  // }
  // else if(marks>=80 && marks < 90)
  // {
  //   cout<<"Grade is B+";
  // }
  // else if(marks>=70 && marks < 80)
  // {
  //   cout<<"Grade is C+";
  // }
  // else if(marks>=60 && marks < 70)
  // {
  //   cout<<"Grade is D+";
  // }
  // else
  // {
  //   cout<<"Grade is F";
  // }

  // char alph;
  // cout<<"Enter the character : ";
  // cin>>alph;
  // if(alph >= 'a' && alph<='z')
  // {
  //   cout<<"Lowercase";
  // }
  // else
  // {
  //   cout<<"Uppercase";
  // }
  // char alph;
  // cout<<"Enter the character : ";
  // cin>>alph;
  // if(alph >= 65 && alph<= 90)
  // {
  //   cout<<"Uppercase";
  // }
  // else
  // {
  //   cout<<"Lowercase";
  // }

  // int n=45;
  // cout<<( n >0 ? "Positive": "Negative" );

  // int a=4,b=6;
  // cout<<(a>b ? "A is greater": "B is greater");


  // int number;
  // cout<<"Enter a number ";
  // cin>>number;
  // int sum = 0;
  // while(n<=5)
  // {
  //   cout<<n<<endl;
  //   n++;
  // }

  // for(int n=1; n<=5; n++)
  // {
  //   cout<<n<<endl;
  // }

  // for(int i=1; i<=number; i++)
  // {
  //   if(i%2!=0)
  //   {
  //     sum +=i;
  //   }
  // }
  // cout<<sum<<endl;

  int is_prime;
  cout<<"Enter a prime number : ";
  cin>>is_prime;
  bool num=true;

  for(int i=2; i<=is_prime-1;i++)
  {
    if(is_prime % 2 == 0)
    {
      num=false;
    }
  }

  if(num==true){
    cout<<"Prime number";
  }
  else
  {
    cout<<"Not a Prime Number";
  }

}