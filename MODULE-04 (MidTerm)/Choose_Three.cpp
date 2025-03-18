#include<bits/stdc++.h>
using namespace std;
int main (){
 int t;
 cin>>t;
 while(t--){
 int n, S;
 cin>> n>> S;
 int a[n];
 for (int i = 0; i < n; ++i) {
 cin >> a[i];
 }
 int f= 0;
 for (int i = 0; i < n; ++i) {
 for (int j = i + 1; j < n; ++j) {
 for (int k = j + 1; k < n; ++k) {
 if (a[i] + a[j] + a[k] == S) {
 f = 1;
 break;
 }
 }
 if (f==1) {
 break;
 }
 }
 if (f==1) {
 break;
 }
 }
 if(f==1){
 cout<<"YES"<<endl;
 }
 else{
 cout<<"NO"<<endl;
 }
 }
 return 0;
}