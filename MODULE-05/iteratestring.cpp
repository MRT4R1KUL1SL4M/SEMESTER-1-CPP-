#include <bits/stdc++.h>
using namespace std;
int main() {
    string s= "AmarSonarBanglaAmiTomayValobashi";
    cout<<*s.begin()<<endl;
    cout<<*(s.end()-1)<<endl;
    for(auto it=s.begin();it<s.end();it++) cout<<*it;
    return 0;
}