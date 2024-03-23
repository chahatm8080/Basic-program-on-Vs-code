/*#include<iostream>
using namespace std;
int main()
{
    int n=3;
    for (int i=0; i<n;i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n=3;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i; j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=3; i<=n; i++)
    {
        for (int j=i; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"hpw many rows to be printed\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            cout<<"*\n";
        }
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*\n";
        }
        for(int j=0; j<n-i-1; j++)
        {
            cout<<"*\n";
        }
        


    }
}