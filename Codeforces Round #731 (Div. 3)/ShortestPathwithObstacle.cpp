#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int xa,ya,xb,yb,xf,yf,count;
        cin >> xa >>ya >>xb >>yb >>xf >>yf;
        
        if(xa==xb && xa==xf)
        {
            if((yf>ya && yf<yb )|| (yf<ya && yf>yb))
                count=abs(ya-yb)+2; 
            else
                count=abs(ya-yb);
        }
        else if (ya==yb && ya==yf)
        {
            if((xf>xa && xf<xb )|| (xf<xa && xf>xb))
                count=abs(xa-xb)+2;
            else
                count=abs(xa-xb);
        }
        else
        {
            count=abs(xa-xb)+abs(ya-yb);
        }
        cout<<count<<endl;
    }
    return 0;
}