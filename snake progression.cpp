#include <bits/stdc++.h>
using namespace std;
// unordered_map<char,int> mp={{'H',1},{'T',-1}};
int main(){
    string str;
    cin>>str;
    int sum=0,i;
    string temp;
    for(int i=0; i<str.length();i++){
        if(isalpha(str[i])){
            // cout<<i<<endl;
            temp.push_back(str[i]);
        }
    }
    //cout<<temp<<endl;
    //HTHTHTHTHTHT
    for(i=0; i<temp.length(); i++){
       // cout<<i<<endl;
        if(temp[0]!='H'){
            cout<<"invalid";
            return 0;
        }
        if(temp.length()%2!=0){
           cout<<"invalid";
            return 0;
        }
        if(i%2==0&&temp[i]!='H'){
            cout<<"invalid";
            break;
        }

        if(i%2!=0&&temp[i]!='T'){
            cout<<"invalid";
            break;
        }

    }
    if(i==temp.length()){
        cout<<"valid"<<endl;
        return 0;
    }
    if(temp.length()==0){
        cout<<"valid"<<endl;
        return 0;
    }
    // if(sum==0){
    //     cout<<valid<<endl;
    //     return;
    // }
    // else
    // {
    //     cout<<invalid<<endl;
    // }
    return 0;
}



