#include<iostream>
using namespace std;
int rev(int n)
{
    int count=0;
    while(n!=0)
    {
      int x=n%10;
      count=count *10+x;
      n=n/10;
    }
    return count ;
}
int main()
{
  int n ;
  cin >>n;
  int y=rev(n);
  cout<<"reverse number is "<<y;
}