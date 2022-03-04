#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,c,r,flag=0;
        char a;
        cin>>n>>m>>r>>c;
        char mat[n+1][m+1];
        for (int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='B')
                    flag=1;
            }
        }
        if(mat[r][c]=='B')
        {
            cout<<"0"<<endl;
        }
        else if(flag!=1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int steps=INT_MAX;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    if(mat[i][j]=='B')
                    {
                        if(i==r || j==c)
                            steps=1;
                    }
                    else
                    {
                        steps=min(steps,2);
                    }
                }
            }
            cout<<steps<<endl;
        }
    }
    return 0;
}