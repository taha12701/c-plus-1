#include<iostream>
using namespace std;

int main()
{
  int number;
  cout<<"Enter no of rows ";
  cin>>number;

  // for(int i=1; i<=number; i++)
  // {
  //   for(int j=1;j<=number;j++)
  //   {
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<=number;i++)
  // {
  //    char ch = 'A';

  //    for (int j = 0; j <= number; j++)
  //    {
  //      cout<<ch;
  //      ch=ch+1;
  //    }
  //    cout<<endl;
  // }

  // int n=1;
  // for(int i=1;i<=number;i++)
  // {
  //   for(int j=1;j<=number;j++)
  //   {
  //     cout<<n;
  //     n = n+1;
  //   }
  //   cout<<endl;
  // }
  // cout<<"after pattern : " << n;


  // char ch = 'A';
  // int n = 0;
  // for (int i = 0; i <= number; i++)
  // {
  //   for (int j = 0; j <= number; j++)
  //   {
  //     cout<<ch;
  //     ch=ch+1;
  //     n = n+1;
  //   }
  //   cout<<endl;

    
  // }
  // cout<<"after pattern : " << ch<<endl;
  // cout<<"total elements : " << n;


  // for(int i=0;i<number;i++)
  // {
  //   for(int j=i+1;j>0;j--)
  //   {
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // for(int i=number;i>=0;i--)
  // {
  //   for(int j=i;j>=0;j--)
  //   {
  //     cout<<i;
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<number;i++)
  // {
  //   for(int j=0;j<i;j++)
  //   {
  //     cout<<" ";
  //   }
  //   for(int k=0;k<number-i;k++)
  //   {
  //     cout<<(i+1);
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<number;i++)
  // {
  //   for(int j=0; j<number-i-1;j++)
  //   {
  //     cout<<" ";
  //   }
  //     for (int k = 1; k <= i+1; k++)
  //     {
  //       cout<<k;
  //     }

  //     for (int m = i; m > 0; m--)
  //     {
  //       cout<<m;
  //     }
      
    
  //   cout<<endl;

  // upper left corner

//   for (int i = 0; i <= number; i++) {
//         // Left stars
//         for (int j = 0; j <= i; j++) {
//             cout << "*";
//         }

//         // Spaces
//         for (int k = 0; k < 2 * (number - i); k++) {
//             cout << " ";
//         }

//         // Right stars
//         for (int j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Lower part of the butterfly
//     for (int i = 0; i <= number; i++) {
//         // Left stars
//         for (int j = number - i; j >= 0; j--) {
//             cout << "*";
//         }

//         // Spaces
//         for (int k = 0; k < 2 * i; k++) {
//             cout << " ";
//         }

//         // Right stars
//         for (int j = number - i; j >= 0; j--) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
}



  



