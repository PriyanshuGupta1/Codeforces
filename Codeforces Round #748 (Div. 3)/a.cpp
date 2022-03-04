#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--) 
    {
        ll a[3];
        for(int i=0; i<3; i++) 
            cin>>a[i];
        ll max=a[0],count=0;
        for(int i=0; i<3; i++) 
        {
            if(max<a[i]) 
                max=a[i];
        }
        for(int i=0; i<3; i++) 
        {
            if(a[i]==max) 
                count++;
        }

        if(count>1)
        {
            for(int i=0; i<3; i++) 
            {
                if(a[i]==max) 
                    cout<<"1 ";
                else
                    cout<<max+1-a[i]<<" ";
            }
        }
        else
        {
            for(int i=0; i<3; i++) 
            {
                if(a[i]<max) 
                    cout<<max+1-a[i]<<" ";
                else
                    cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}