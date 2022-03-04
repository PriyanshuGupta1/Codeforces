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
        if(s.length()<=2)
            cout<<"0"<<endl;
        else
        {
            int count_0=0,count_1=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='1')
                    count_1++;
                else
                    count_0++;
            }
            if(count_1>count_0)
                cout<<count_0<<endl;
            else if(count_1<count_0)
                cout<<count_1<<endl;
            else
            {
                
            }
        }
    }
    return 0;
}