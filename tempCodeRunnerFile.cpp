  for(int i=0;i<=number;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"*";
    }

    for(int k=1;k<(2*number-2-i);k++)
    {
      cout<<" ";
    }
    for(int j=0;j<=i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }