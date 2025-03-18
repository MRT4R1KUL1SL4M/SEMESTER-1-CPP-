#include<bits/stdc++.h>
using namespace std;
int main (){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        bool a=false;
        while(ss>>word){
            if(word=="Jessica"){
                a=true;
                break;
            }
        }
        if(a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;
}