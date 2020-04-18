#include<iostream>

using namespace std;

int fib(int n)
{
    int *a=new int[n+1];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
    return a[n];
}

int main()
{
    int n,k;
    cout<<"Enter a No "<<endl;
    cin>>n;
    k=fib(n);
    cout<<"Ans: "<<k<<endl;
    return 0;
}

