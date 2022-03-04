#include <iostream>
#include <vector>
using namespace std;
int mex(int *v,int n,int k)
{
    vector <bool> w(n+1,0);
    for(int i=0;i<=k;i++)
        w[v[i]]=1;
    for(int i=0;i<=n;i++)
    {
        if(w[i]==0)
            return i;
    }
    return w.size();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector <int> s;
        int m=0,j=0,index=0;
        while(index!=n-1)
        {
            for(int i=j;i<n;i++)
            {
                int q=mex(a+j,n,i);
                cout<<q<<" ";
                if(q>m)
                {
                    m=q;
                    index=i;
                }
            }
            cout<<"a";
            j=index;
            cout<<j<<" ";
            s.push_back(m);
            m=0;
        }cout<<endl;
        for(auto w:s)
            cout<<w<<" ";
        cout<<endl;
    }
}