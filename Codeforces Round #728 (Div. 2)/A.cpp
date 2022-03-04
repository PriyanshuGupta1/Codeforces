#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
            a[i]=i;
        
        if(n%2==0 && n/2!=1 && n%3!=0)
        {
            for(int i=1;i<=n/2;i++)
            {
                swap(a[i],a[i+1]);
            }
            for(int i=(n+1)/2;i<n;i++)
            {
                swap(a[i],a[i+1]);
            }
        }
        else if(n%2==0 && n%3==0)
        {
            for(int i=2;i<=n;i=i+2)
                swap(a[i],a[i-1]);
        }
        else if(n/2==1 && n%2==0)
        {
            swap(a[1],a[2]);
        }
        else
        {
            int temp=a[n];
            for(int i=2;i<n-2;i++)
                swap(a[i],a[i-1]);
            a[n]=a[n-1];
            a[n-1]=a[n-2];
            a[n-2]=temp;
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}