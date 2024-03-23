#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
  int a=0,b=1,c;
  if(n==0 or n==1)
  {
    return 1;
  }
  else
  {
    for(int i=3; i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c; 
    }
    return c;
  }
}
int main ()
{
  int n;
  cin>>n;
  cout<<fibonacci(n);
}