#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,curr=0,section=0;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=1; i<=n-1; i++)
        {
            if(a[i]<a[i+1])
            {
                curr=0;
            }
            else
            {
                section++;
            }
        }
        cout<<section<<endl;
    }
    return 0;
}