#include<bits/stdc++.h>
using namespace std;
class Student{
 public:
 int uid;
 char name [101];
 char a;
 int score;
 Student():uid(0),a('\0'),score(0) {
 name[0] ='\0';
 }
 Student (int uid, char *name, char a, int score){
 this->uid=uid;
 strcpy(this->name, name);
 this->a=a;
 this->score=score;
}
}; 
int main (){
 int T;
 cin >> T;
 for (int i = 0; i < T; i++) {
 Student students[3];
 for (int j = 0; j < 3; j++) {
 int uid, score;
 char name[101];
 char a;
 cin >> uid >> name >> a >> score;
 students[j]= Student(uid, name, a, score);
 }
 int ms = students[0].score;
 int mi= students[0].uid;
 for(int i = 1; i < 3; i++){
 if(students[i].score > ms){
 ms= students[i].score;
 mi= students[i].uid;
 }
 else if(students[i].score == ms && students[i].uid < mi){
 ms =students[i].score;
 mi= students[i].uid;
 }
}
 cout << mi <<" "<< students[mi - 1].name <<" "<<students[mi - 1].a <<" "<< ms<<endl;
 }
return 0;
}