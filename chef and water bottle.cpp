#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        if(k/x>n)
        {
            cout<<n<<endl;
        }
        else
            cout<<k/x<<endl;
        //int ans=min(k/x,n);
        //cout<<ans<<endl;
    }
}
