#include<iostream>
using namespace std;

int increase(int n)
{
    n=n+1;
    return n;
}
int increse1(int&k)
{
    k=k+1;
}
int main()
{
    // int k=5;
    // int&c=k;//ref of k
    // int&n=k;//ref of k n and c is refrance variable
    // cout<<k<<endl<<c<<endl<<n;

    //-----call by value
    // int n;
    // cin>>n;
    // n=increase(n);
    // cout<<n<<endl;

    //there will be 2 memory box for n one in main and other for function
    //because it go 5 by value

    //now in refrance type

    int k;
    cin>>k;
    k=increase(k);
    cout<<k<<endl;
    return 0;
    
}