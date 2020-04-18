#include<iostream>
#include<cmath>
using namespace std;

// BY Memoiztion

int mincount(int *a,int n)
{
    int minc=INT_MAX,count;
    if(a[n]!=-1)
        return a[n];
    if(n==0)
        return 0;
    if(n==1)
        return 1;
   
    for(int i=1;i<=sqrt(n);i++)
    {
        count=1+mincount(a,n-i*i);
        if(count<minc)
            minc=count;
            }
    a[n]=minc;
    return a[n];
}
int main()
{
    int n;
    cout<<"Enter a no "<<endl;
    cin>>n;
    int *a=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        a[i]=-1;
    }
    cout<<"Reqd: "<<mincount(a,n)<<endl;
    
}
