#include <bits/stdc++.h>
using namespace std;
int main() {
    char input;
    cin >> input;
    if (input>='a' && input <='z') cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    if (input>='A' && input <='Z') cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    if (input>='0' && input <='9') cout<<"IS DIGIT"<<endl;
    return 0;
}