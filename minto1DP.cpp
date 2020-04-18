#include<iostream>
#include<math>
using namespace std;

int minTo1Step(int n)
{
       
        int *a=new int[n+1];
        a[0]=0;
        a[1]=0;
        //int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    //     for (int i=0; i<=n; i++)
    //         a[i] = n-i;
    //    for (int i=n; i>=1; i--)
    //     { 
    //        if (!(i%2))
    //           a[i/2] = min(a[i]+1, a[i/2]);
    //        if (!(i%3))
    //           a[i/3] = min(a[i]+1, a[i/3]);
    //     }
    //     // a[n]=1+min(x,min(y,z));
    //     return a[1];
         

    // }
               for(int i=2;i<=n;i++) {
                        int r = 1+a[i-1];
                        if(i%2 == 0) r = min(r,1+a[i/2]);
                        if(i%3 == 0) r = min(r,1+a[i/3]);
                        a[i] = r;
                }
                return a[n];
}
int main()
{
    int n;
    cout<<"Enter a No "<<endl;
    cin>>n;
    cout<<"Reqd :" <<minTo1Step(n)<<endl;
    
}


