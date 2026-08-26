#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;
string soundex(const string& word){
  string result;
  result.push_back(word[0]);
  unordered_set<char> toRemove = {'a','e','h','i','o','u','w','y'};
  string code;
  for(int i = 1; i <word.length();i++){
    char c = word[i];
    if(toRemove.count(c)){
      continue;
    }
    if (c == 'b' or c=='f' or c=='p' or c=='v'){
      code.push_back('1');
    } else if (c=='c' or c=='g' or c=='j' or c=='k' or c=='q' or c=='s' or c=='x' or c=='z'){
      code.push_back('2');
    } else if(c=='d' or c=='t'){
      code.push_back('3');
    } else if(c=='l'){
      code.push_back('4');
    } else if(c=='m' or c=='n'){
      code.push_back('5');
    } else if(c=='r'){
      code.push_back('6');
    }
    
  }
  string unique;
  for(char c:code){
    if(unique.empty() or unique.back() !=c){
      unique.push_back(c);
    }
  }
  result+=unique;
  if (result.length()>=4){
    result = result.substr(0,4);
  }else{
    while(result.length()<4){
      result.push_back('0');
    }
  }
  return result;
}
int main(){
  string word;
  cin >> word;
  cout << soundex(word)<< endl;
  return 0;

}
