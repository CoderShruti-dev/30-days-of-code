#include<bits/stdc++.h>
using namespace std;
int main()
{

    //set<int>s;
    set<int,greater<int>>s;
    s.insert(10);
    s.insert(45);
    s.insert(30);
    s.insert(20);

    cout<<"first set :";
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    set<int> s2(s.begin(), s.end());///assigning all elements from s to s2.
    cout<<"second set :";
    for(auto it:s2)
    cout<<it<<" ";
    cout<<endl;

    s2.erase(s2.begin(), s2.find(30));///remove all elements upto 30 in s2
    for(auto it:s2)
    cout<<it<<" ";
    cout<<endl;
    int num=s2.erase(45);///remove 45 from s2.
    for(auto it:s2)
    {
        cout<<it<<" ";
    }

}
