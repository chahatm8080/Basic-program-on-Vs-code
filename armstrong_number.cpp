#include<iostream>
using namespace std;
int main ()
{
  int n;
  cin>>n;
  int count =0;
  int temp=n;
  while(n>0)
  {
    int ld=n%10;
    count =count +ld*ld*ld;
    n=n/10;
  }
  if (temp == count)
  {
    cout<<count<<" is armstrong numbers";
  }
  else 
  cout<<count<<" is not a armstrong numbers";
}