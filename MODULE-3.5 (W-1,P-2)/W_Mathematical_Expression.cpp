#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,b,c;
    char s;
    char q;
    cin >> a >> s >> b>> q>>c;
    if((s=='+'&& a+b==c) || (s=='-' && a-b==c)||(s=='*'&&a*b==c))
    {
        cout << "Yes";
    }
    else
    {
        if (s=='+'&& a+b!=c)
        {
            int sum=a+b;
            cout<<sum;
        }
        else if (s=='-'&& a-b!=c)
        {
            int sub=a-b;
            cout<<sub;
        }
        else if (s=='*'&& a*b!=c)
        {
            int mul=a*b;
            cout<<mul;
        }
    }
    return 0;
}