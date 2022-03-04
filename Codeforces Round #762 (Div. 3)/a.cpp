#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        
        if(n%2==1)
            cout<<"NO"<<endl;
        else
        {
            string a=s.substr(0,n/2);
            string w=s.substr(n/2,n);
            
            if(a==w)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}