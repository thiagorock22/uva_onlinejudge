#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<char> lista;
vector<char> s;
vector<string> p;

int np = 0;

void perm(void);
void imprimir();
void guarda();
void ler();

int main(void)
{
    int c,n;
    cin >> c;
    for(int i=0;i<c;i++) {
         ler();
         perm();
         cin >> n;
         cout << p[n] << endl;
    }
    return 0;
}

void perm(void){
     vector<char>::iterator it;          
     for(int i=0; i<lista.size(); i++) {      
         it = find (s.begin(), s.end(), lista[i]);
         if (it==s.end()) {
            np++; s.push_back(lista[i]);
            if(np==lista.size()) 
                guarda();//imprimir();
            else
                perm();
            np--;
            it = find (s.begin(), s.end(), lista[i]);
            if (it!=s.end())
                 s.erase(it);
         }
     }
}

void imprimir() {
     if(s.size() > 0) {
         for(vector<char>::iterator it = s.begin(); it != s.end(); it++)
             cout << *it;
     }
     cout << endl;
}

void ler() {
     string a;
     
     lista.clear();
     
     cin >> a;
     sort (a.begin(), a.end());
     for(int i=0; i<a.length(); i++)
          lista.push_back(a[i]);
}

void guarda() {
     string x = "";
     for(vector<char>::iterator it = s.begin(); it != s.end(); it++)
          x += *it;
     p.push_back(x);
}
