#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector <ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        ll countRed=0,countBlue=0,sumRed=0,sumBlue=0,j=n-1;
        for(ll i=0;j+1!=i && i<n;i++)
        {
            if(sumRed==0)
            {
                sumRed+=a[j];
                countRed++;
                j--;
            }
            else if(sumRed<=sumBlue)
            {
                sumRed+=a[j];
                countRed++;
                j--;
            }
            if(sumBlue==0)
            {
                sumBlue+=a[i];
                countBlue++;
            }
            else if(countRed>=countBlue)
            {
                sumBlue+=a[i];
                countBlue++;
            }
            if(sumRed>sumBlue && countRed<countBlue)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(sumRed<=sumBlue || countRed>=countBlue)
            cout<<"NO"<<endl;
    }
    return 0;
}