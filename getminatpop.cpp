#include<bits/stdc++.h>
using namespace std;
stack<int>pus(int arr[],int n)
{
    stack<int>st;
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        st.push(min);
    }
    return st;
}
void getminatpop(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        stack<int>st=pus(a,n);
        getminatpop(st);
        cout<<endl;
    }
}
