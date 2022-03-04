#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len = s.length(),flag=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]>=97+len)
            {
                flag=1;
                break;
            }
            if(s[i]==s[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else    
            cout<<"YES"<<endl;
    }
    return 0;
}