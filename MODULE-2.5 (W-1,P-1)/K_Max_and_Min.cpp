#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z;
    cin >>x>>y>>z;
    int a= max({x,y,z});
    int b= min({x,y,z});
    cout<<b<<" "<<a<<endl;
    return 0;
}