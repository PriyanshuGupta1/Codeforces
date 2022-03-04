#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef long ll;
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        string num;
        cin>>num;
        int flag1=1,a=1,b=1,count=0,flag2=1;
        ll n=num.length();
        while(flag1!=0 && flag2!=0)
        {
            if((num[n-1]=0 || num[n-1]==5) && a==1)
            {
                flag1--;
                a--;
            }
            else if(flag1!=0)
            {
                num.resize(num.size() - 1);
                count++;
            }
            if((num[n-2]=0 || num[n-2]==2 || num[n-2]=5 || num[n-2]==7) && b==1)
            {
                flag2--;
                b--;
            }
            else if(flag2!=0)
            {
                num.erase(n-2);
                count++;
            }
            


                
        }
        cout<<count<<endl;
    }
    return 0;
}