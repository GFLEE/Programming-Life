 #include <iostream>
 using namespace std;
 int  main()
 {
      int n;
      int a;
      int sum=0;
      cout<<"input n: ";
      cin>>n;
      cout<<"numbers are: ";
      for(int i=1;i<=n;i++)
      {
	    a=2*i-1;
      cout<<a<<" ";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++)
      {
	    a=2*i-1;
         sum=sum+a;
  }
  cout<<"Sum="<<sum;
        return 0;
      }
