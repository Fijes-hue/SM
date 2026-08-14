#include<iostream>
#include<string>
using namespace std;
int main(){
   string binary;
   cout << "Введите двоичное число состоящее из 0 и 1" << endl;
   cin >> binary;
   
   long long result = 0;
   for(char c : binary){
      if(c!='0' and c!='1'){
         cout << "Введите правильное число" << endl;
         return 1;
      }
      result = result * 2 + (c - '0');
   }
   cout << "Ответ: " << result << endl;
   return 0;

}