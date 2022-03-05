#include<bits/stdc++.h>
using namespace std;
void display(multimap<int,int> m)
{
    for(auto value:m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    multimap<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp.insert(pair<int,int>(a[i],i));
    }
    display(mp);
    int x;
    cin>>x;
    auto it=mp.find(x);
   /// mp.erase(it);
    if(it!=mp.end())
    {
        cout<<"erased"<<" "<<x<<endl;
        mp.erase(x);
    }
    else
        cout<<"not found";
    display(mp);



}




