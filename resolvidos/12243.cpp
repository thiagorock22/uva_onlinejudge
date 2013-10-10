#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isTautograma(string frase);

int main(void)
{
    string s;
    
    int i = 0;
    for(getline(cin, s); s.compare("*") != 0 ; getline(cin, s)) {
         if(isTautograma(s)) {
             cout << "Y" << endl;
         } else {
             cout << "N" << endl;         
         }
    }
    return 0;
}

bool isTautograma(string frase) {
     istringstream ss;
     ss.str(frase);
     string p;     // palavra
     char pl; // primeira letra
     
     ss >> p;
     pl = toupper(p[0]);
     while(ss >> p) {
          if(pl != toupper(p[0])) return false;
     }
     return true;
}
