#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        string x;
        cin>>s;
        cin>>x;
        int p=s.find(x);
        while(p!= -1){
            s.replace(p,x.size(),"#");
            p=s.find(x,p+1);
        }
        cout<<s<<endl;
    }
    return 0;
}