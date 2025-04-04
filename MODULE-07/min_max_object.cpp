#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;                // এরে সাইজ ইনপুট নিচ্ছি। 
    Student a[n];            // ইনপুট নেওয়া সাইজের এরে ডিক্লেয়ার করা হচ্ছে। 
    for (int i = 0; i < n; i++)        // অবজেক্ট ইনপুট নেওয়া হচ্ছে। 
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    Student mn;            // মিনিমাম অবজেক্টটি বের করে স্টোর করার জন্য একটি অবজেক্ট নেওয়া হয়েছে।
    mn.marks = INT_MAX;    // যেহেতু আমরা মার্ক্স দেখে মিনিমাম বের করব তাই এই অবজেক্ট এর মার্ক্স শুরুতে INT_MAX দিয়ে ইনিশিয়ালাইজ করা হয়েছে।  

    for (int i = 0; i < n; i++)      // তারপর নরমালি আমরা এরে থেকে মিনিমাম বের করার জন্য যেভাবে লুপ চালাতাম সেভাবে লুপ চালিয়ে এরের শুরু থেকে শেষ পর্যন্ত সবগুলো অবজেক্ট এর কাছে যাওয়া হচ্ছে।
    {
        if (a[i].marks < mn.marks)     // অবজেক্টের মার্ক্স এর সাথে আমাদের আন্সার অবজেক্ট এর মার্ক্স কম্পেয়ার করে দেখা হচ্ছে। যদি অবজেক্টের মার্ক্স কম হয় তাহলে আমাদের আন্সার অবজেক্ট অর্থাৎ মিনিমাম অবজেক্ট আপডেট করা হচ্ছে। 
        {
            mn = a[i];                 // আন্সার অবজেক্ট অর্থাৎ মিনিমাম অবজেক্ট এর মধ্যে লুপের অবজেক্টকে রেখে দেওয়া হচ্ছে কারন এই অবজেক্ট এর মার্ক্স আমাদের মিনিমাম অবজেক্ট থেকে কম।  এভাবে লুপ শেষে সবচেয়ে কম মার্ক্স এর অবজেক্টটি অর্থাৎ স্টুডেন্টটির ডাটা স্টোর থাকবে mn অবজেক্টটিতে।
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;     // মিনিমাম অবজেক্ট প্রিন্ট করা হচ্ছে। 
    return 0;
}