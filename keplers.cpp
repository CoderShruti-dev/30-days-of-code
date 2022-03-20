#include<bits/stdc++.h>
using namespace std;
int square(int n)
{
    int sq=1;
    sq=n*n;
    return sq;
}
int cube(int n)
{
    int cu=1;
    cu=n*n*n;
    return cu;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        //cout<<square(t1);
        int eq1=1,eq2=1;
        eq1=square(t1)*cube(r2);
        eq2=square(t2)*cube(r1);
       // cout<<eq1<<endl;
       // cout<<eq2<<endl;
       if(eq1==eq2)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;


    }
}
