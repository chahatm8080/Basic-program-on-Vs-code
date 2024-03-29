#include<iostream>
using namespace std;
int count_digit(int n)
{
  int count=0;
	int num=n;
	while(n!=0){

        int r=n%10;
		if(r==0){

		}
		else if (num%r==0)
		{
			count++;
		}
		n=n/10;
	}
  cout<<count;
	
	
}
int main ()
{
  int n=12345;
  count_digit(n);
 
}