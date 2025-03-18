#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="Tarikul";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(5);
    cout<<s<<endl;
    
    return 0;
}