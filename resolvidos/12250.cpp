#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, string> mymap;

void imprimir(int i, string palavra);

int main(void)
{
    string palavra;

    mymap["HELLO"] = "ENGLISH";
    mymap["HOLA"] = "SPANISH";
    mymap["HALLO"] = "GERMAN";
    mymap["BONJOUR"] = "FRENCH";
    mymap["CIAO"] = "ITALIAN";
    mymap["ZDRAVSTVUJTE"] = "RUSSIAN";
    
    int i = 0;
    cin >> palavra;
    while( palavra.compare("#") != 0 ) {
         imprimir(++i, palavra);
         cin >> palavra;
    }
    return 0;
}

void imprimir(int i, string palavra) {
     map<string,string>::iterator it;
     it = mymap.find(palavra);
     
     string s;

     if(it != mymap.end()){
         s = mymap[palavra];
     } else {
         s = "UNKNOWN";       
     }
     cout << "Case " << i << ": " << s << endl;
}
