#include <iostream>
using namespace std;
typedef long long int ll;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll count=0,a,b,mx,count2=0,d;
        cin>>a>>b;
        if(a==b)
            cout<<"0 0"<<endl;
        else if(abs(a-b)==1)
            cout<<"1 0"<<endl;
        else if(a==1 || b==1)
        {
            if(a==1)
                cout<<b-1<<" 1"<<endl;
            if(b==1)
                cout<<a-1<<" 1"<<endl;
        }
        else
        {
            mx=abs(a-b);
            count=mx;
            while(count2<=count)
            {
                a=a+1;
                b=b+1;
                ll d=gcd(a,b);
                count2++;
                if(d>=mx)
                {
                    mx=max(d,mx);
                    break;
                }
            }
            cout<<mx<<" "<<min(count2,count)<<endl;
        }   
    }

    return 0;
}