#include <bits/stdc++.h>
using namespace std;
int calc_max(vector<int> a)
{
    int res = 0;
    for( auto i : a )
        res = max( res , i );
    return res;
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(auto &i:a)
            cin>>i;
        for(auto &i:b)
            cin >> i;
        for(int i=0;i<n;i++)
            if(a[i]>b[i])
                swap(a[i],b[i]);
        cout<<calc_max(a)*calc_max(b)<<endl;
    }
}