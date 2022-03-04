#include <iostream>
typedef long long ll;
using namespace std;
bool check(ll num,ll x,int a,int b)
{
    if(num>x || num<0)  
        return 0;
    if(num==x)  
    {
        cout<<a<<" "<<b<<endl;
            return 1;
    }
    
    ll num1,num2;
    num1=num*a;
    num2=num+b;
    cout<<num<<" "<<a<<" "<<b<<endl;
    if(a!=1)
        return check(num1,x,a,b) || check(num2,x,a,b) ;
    else
        return check(num2,x,a,b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,a,b;
        cin>>x>>a>>b;
        if(check(1,x,a,b)==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}