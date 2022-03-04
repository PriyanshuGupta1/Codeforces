#include <iostream>
#include <iomanip>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        float sum=0;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max=a[0],index=0;
        for (int i = 0; i < n;i++)
        {
            if(a[i] > max)
            {
                max=a[i];
                index=i;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(i!=index)
                sum+=a[i];
        }
        float sum1=sum/(n-1)+max;
        cout<<setprecision(9)<<fixed<<sum1<<endl;
    }
    return 0;
}