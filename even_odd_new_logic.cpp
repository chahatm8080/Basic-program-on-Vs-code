#include<iostream>
using namespace std;
int main()
{   int result_even=0;
    int result_odd=0;
    int n,i;
    cin>>n;
   
    while(n!=0)
    {   i=n%10;
        if (i%2==0)
        {
            result_even+=i;
        }
        else 
        {
            result_odd+=i;
        }
        n=n/10;
    }
    cout<<result_even<<" "<<result_odd;
    
}