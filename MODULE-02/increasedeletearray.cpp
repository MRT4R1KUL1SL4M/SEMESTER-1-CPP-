#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];      // a এরে আছে ৩ সাইজের। 
    int *b = new int[3];      // কপি করে রাখার জন্য আরেকটি b এরে নেওয়া হলো সেইম সাইজের।
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];        // ইনপুট নিয়ে a এরেতে রাখা হচ্ছে। 
        b[i] = a[i];        // কপি করে b এরেতে রাখা হচ্ছে। 
    }

    delete[] a;             // a ডিলিট করে দেওয়া হলো। 

    a = new int[5];         // নতুন করে a এরে ডিক্লেয়ার করা হলো ৫ সাইজের। 
    for (int i = 0; i < 3; i++)    
    {
        a[i] = b[i];         // b এরে থেকে কপি করে a এরেতে রাখা হচ্ছে। 
    }
    delete[] b;             // এবার b ডিলিট করে দেওয়া হলো। 
    a[3] = 40;              // এখন আমাদের কাছে একটিই এরে আছে a এরে, যার সাইজ হচ্ছে ৫। এবং এর প্রথম ৩ ইন্ডেক্সে পূর্বের ৩টি ভেলু স্টোর আছে। এবার শেষের দুটি ইন্ডেক্সে ভেলু রাখা হচ্ছে। 
    a[4] = 50;
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";      // a এরে প্রিন্ট করা হচ্ছে। 
    return 0;
}