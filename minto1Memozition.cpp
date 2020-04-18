#include<iostream>
using namespace std;

int helper(int n,int * a)
{
    if(a[n]!=-1)
        return a[n];
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
        if(n<=1)
            return 0;
        z=helper(n-1,a);
        if(n%2==0)
            x=helper(n/2,a);
        if(n%3==0)
            y=helper(n/3,a);
        if(x<y && x<z)
            return a[n]=1+x;
        if(y<z)
            return a[n]=1+y;
        else
            return a[n]=1+z;
        }
int main()
{
    int n;
    cout<<"Enter a No "<<endl;
    cin>>n;
    int *a=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        a[i]=-1;
    }
    cout<<"Reqd :" <<helper(n,a)<<endl;
    
}

