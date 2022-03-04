#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,counteven=0,countodd=0;
        cin>>n;
        ll a[2*n];
        for(int i=0;i<2*n;i++)
            cin>>a[i];
        for(int i=0;i<2*n;i=i+1)
        {
            if(a[i]%2==0)
                counteven++;
            else
                countodd++;
        }
        if(counteven==countodd)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}