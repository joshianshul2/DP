#include<iostream>
using namespace std;

int stairCase(int n)
{
    int *a=new int[n+1];
    a[0]=1;// a[0]=1 bcz if i==3 then a[3-3]=a[0]=1; for 3rd case only;
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=n;i++)
    {
        a[i]=a[i-2]+a[i-1]+a[i-3];
    }
    return a[n];
}
int main()
{
    int n;
    cout<<"Enter a no"<<endl;
    cin>>n;
    int k=stairCase(n);
    cout<<"Required StairCase is "<<k<<endl;
    
}
