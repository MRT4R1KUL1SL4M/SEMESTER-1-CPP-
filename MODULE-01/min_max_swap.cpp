#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    // int a=min(x,y);  //dui er beshi hoile curly brace dite hobe.
    // int b=max(x,y);
    // cout<<a<<" "<<b;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}