#include <iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1  && b==1 ) || (a==1 && c==1) || (b==1 && c==1) || (a==1 && b==1 && c==1))
            count++;
    }
    cout<<count<<endl;
    return 0;
}