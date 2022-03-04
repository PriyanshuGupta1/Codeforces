#include <iostream>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        n=n*n;
        cout<<s/n<<endl;
    }
    return 0;
}