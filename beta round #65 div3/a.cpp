#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        if(n<=10)
            cout<<s<<endl;
        else
        {
            string nt,n1,n3,n5; 
            ll n2;
            n1=s[0];
            n2=s.length()-2;
            n5=to_string(n2);
            n3=s[n-1];
            nt=n1+n5+n3;
            cout<<nt<<endl;
        }
    }
    return 0;
}