// Euclidean Algorithm (also known as repeated Subtraction) is used for this method 

// Euclidean Algorithm: GCD of two numbers remains constant even if we subtract the smaller number from the higher number.
// Below is an example of a manual calculation that you can understand before moving ahead with the code.


#include<iostream>
using namespace std;

// Using Euclidean Algorithm (Repeated Subtraction)
int main()
{
    int n1 = 104, n2 = 24, gcd = 1;
    
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    
    cout<<"The GCD : "<<n1;
    
    return 0;
}