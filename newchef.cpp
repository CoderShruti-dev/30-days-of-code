/*#include <bits/stdc++.h>
using namespace std;
int main() {
    map<char,int> m;
    string str;
    cin>>str;
    for(int i = 0;i<str.size();i++)
     {

        m[str[i]]++;
      }
   int t;
   cin>>t;
   string s1;

   while(t--)
   {
     cin>>s1;
     int value=0;
      for(int i = 0;i<s1.size();i++)
      {
         if(m.find(s1[i])==m.end())
           {
               value=1;
               break;

           }

       }
    if(value)
       {

           cout << "No" <<endl;

       }

       else{
         cout <<"Yes"<<endl;

       }

}

}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int n1=n/2;
        int value=0;
        for(int i=0;i<n1;i++)
        {
            for(int j=n1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    value=1;
                    break;
                }
            }
        }
        if(value)
       {

           cout << "Yes" <<endl;

       }

       else{
         cout <<"No"<<endl;

       }

    }
}*/

#include<iostream>
using namespace std;
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
    int n1=n/2;
    int value=0;
        for(int i=0;i<n1;i++)
        {
            if (a[i]!= a[n-i-1])
                {
                    value=1;
                    break;
                }
            }
        if(value)
       {

           cout << "no" <<endl;

       }

       else{
         cout <<"yes"<<endl;

       }

}
}























