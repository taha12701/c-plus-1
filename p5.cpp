#include<iostream>
using namespace std;

// int primeNum(int n)
// {

// }
// int main()
// {
//   int n;
//   cout<<"Enter a number : ";
//   cin>>n;
//   bool flag=true;
  

//   for(int i=2;i<n;i++)
//   {
   
//     if(n%i==0)
//     {
//       flag=false;
//       break;
//     }
//   }
//     // Output the result
//     if (flag==true) {
//         cout << n << " is a prime number." << endl;
//     } else {
//         cout << n << " is not a prime number." << endl;
//     }
// }

// int findPrime()
// {
//   int n;
//   cout<<"Enter a number : ";
//   cin>>n;
//   bool flag=true;
//   for(int i=2;i<n;i++)
//   {
//     if(n%i==0)
//     {
//       flag=false;
//       break;
//     }
//   }
//   if(flag)
//   {
//     cout<<n<<" is a prime number ";
//   }
//   else
//   {
//     cout<<n<<" is not a prime number ";
//   }
// }

// int main()
// {
//   findPrime();
// }

// int main()
// {
//   int n;
//   cout<<"Enter a number : ";
//   cin>>n;
//   bool flag=true;

//   for(int i=2;i<=n;i++)
//   {
//     if(n==1)
//     {
//       break;
//     }
//     else
//     {
//       for(int num=2;num<n;i++)
//       {
//         if(n%num==0)
//         {
//           flag=false;
//         }
//       }
//     }
//     if(flag)
//   {
//     cout<<i;
//   }
//   }
//   cout<<endl;
// int main() {
//     int n;
    
//     // Input the number 'n'
//     cout << "Enter the value of n: ";
//     cin >> n;
    

//     // Loop through all numbers from 2 to n
//     for (int num = 2; num <= n; num++) {
//       bool isPrime = true;
        

//         // Check if the current number is prime
//         for (int i = 2; i* i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         // If the number is prime, print it
//         if (isPrime) {
//             cout << num << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }

  
int isPrime()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;

  for(int num=2;num<=n;num++)
  {
    bool isPrime=true;

    for(int i=2;i*i<=num;i++)
    {
      if(num %i==0)
      {
        isPrime=false;
        break;
      }
    }
    if(isPrime)
    {
      cout<<num<<" ";
    }
  }
   cout<<endl;

}

int main()
{
  isPrime();
}