#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[7],x,y,z;
        for(int i = 0; i < 7; i++)
        {
            cin>>a[i];
        }
        x=a[0],y=a[1],z=a[2];
        if(x+y+z==a[6])
            cout<<x<<" "<<y<<" "<<z<<endl;
        else
        {
            z=a[3];
            if(x+y+z==a[6])
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}