#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long a[4],count=0;
    for(int i=0;i<4;i++)
        cin>>a[i];
    sort(a,a+5);
    for(int i=0;i<4;i++)
    {
        if(a[i]==a[i+1])
            count++;
    }
    cout<<count<<endl;
    return 0;
}