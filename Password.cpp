#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isValidPassword(const string& password){
  if(password.length()< 8 || password.length()>14){
    return false;
  }
bool Upercase = false;
bool Lowercase = false;
bool Digit = false;
bool Other = false;
for(char c : password){
  if(c < 33 || c > 126){
    return false;
  }
  if(isupper(c)){
    Upercase = true;
  }else if(islower(c)){
    Lowercase = true;
  }else if(isdigit(c)){
    Digit = true;
  }else{
    Other = true;
  }
}
int Count = 0;
if(Upercase) Count++;
if(Lowercase) Count++;
if(Digit) Count++;
if(Other) Count++;
return Count>=3;
}
int main(){
  string password;
  getline(cin,password);
  cout << (isValidPassword(password)?"YES":"NO")<<endl;
}
