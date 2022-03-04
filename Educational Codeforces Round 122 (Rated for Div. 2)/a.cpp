#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
            cout<<n<<endl;
        else
        {
            int a=n/10;
            if((n-n%7)/10!=a)
                n+=(7-n%7);
            else
                n-=n%7;
            cout<<n<<endl;
        }
    }
    return 0;
}