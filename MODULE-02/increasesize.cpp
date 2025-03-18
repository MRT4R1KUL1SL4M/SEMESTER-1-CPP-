#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];      // ৫ সাইজের ডায়নামিক এরে ডিক্লেয়ার করা হয়েছে। 
    for(int i=0;i<5;i++)
    {
        cin >> a[i];          // এরে এলিমেন্ট ইনপুট নেওয়া হয়েছে।
    }
    for(int i=0;i<5;i++)
    {
        cout << a[i] << " ";   // এরে এলিমেন্ট প্রিন্ট করা হয়েছে। 
    }
    cout << endl;
    delete[] a;               // ডায়নামিক এরে ডিলিট করে দেওয়া হয়েছে। 
    for(int i=0;i<5;i++)
    {
        cout << a[i] << " ";    // ডিলিট করার পর এরে এলিমেন্ট প্রিন্ট করা হয়েছে। 
    }
}