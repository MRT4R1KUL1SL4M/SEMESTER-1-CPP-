#include <bits/stdc++.h>
using namespace std;
    namespace Rakib
    {
        int age=24;
        void hello ()
        {
            cout<<"Hello 1"<<endl;
        }
    }
    namespace Sakib
    {
        int age2=24;
        void hello2()
        {
            cout<<"Hello 2";
        }
    }
    using namespace Rakib;
    using namespace Sakib;
int main() {
    hello();
    hello2();
    return 0;
}