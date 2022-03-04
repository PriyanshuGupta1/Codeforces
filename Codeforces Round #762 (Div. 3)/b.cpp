#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll count=floor(sqrt(n))+floor(cbrt(n))-floor(sqrt(cbrt(n)));
        cout<<count<<endl;
    }
    return 0;
}
