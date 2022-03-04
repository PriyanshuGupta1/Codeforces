#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k=n*m-1;
        vector<int> v;
        for (int i=0;i<n;++i)
            for (int j=0;j<m;++j)
                v.push_back(max(i,n-i-1)+max(j,m-j-1));
        sort(v.begin(),v.end());
        for (int i=0;i<=k;++i) 
            cout << v[i] << " ";
        cout<<endl;
    }
    return 0;
}