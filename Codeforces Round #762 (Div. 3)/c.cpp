#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,s,b;
        cin>>a>>s;
        int n=a.length();
        int w=s.length();
        while(n--)
        {
            string t1=""+a.substr(n,n+1);
            string t2=""+s.substr(w-1,w);
            cout<<t1<<" "<<t2<<endl;
            w--;
        }


    }
    return 0;
}