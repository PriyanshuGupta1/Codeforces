#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,diff1=0,diff2=0;
        cin>>a>>b>>c;
        if(a==b && a==c && a!=0 && b!=0 && c!=0) 
            cout<<"YES"<<endl;
        else if(a==0 && b==0 || (a==0 && c==0 )|| (b==0 && c==0))
            cout<<"NO"<<endl;
        else if(b-a==c-b)
        {
            cout<<"YES"<<endl;
        }
        else if(b>=a && b>=c)
        {
            diff1=c-b,diff2=b-a;
            if(diff1%a==0)
                cout<<"YES"<<endl;
            else if(diff2%c==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(a>=b && c>b)
        {
            diff1=floor((a+c)/2);
            if((c-a)&1)
                cout<<"NO"<<endl;
            else if(diff1%b==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(a>b && b>c)
        {
            diff1=a-b;
            if(diff1%c==0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}