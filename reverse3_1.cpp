#include<iostream>
using namespace std;
int rev(int x)
{ int count = 0;
        while (x!=0)
        {
            int n=x%10;
           count=count*10+n;
            x=x/10;
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