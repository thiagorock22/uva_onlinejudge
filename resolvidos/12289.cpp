#include <iostream>
using namespace std;

bool isPalavra(string palavra, string p);

int main(void)
{
    int n;
    string p;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> p;
        if(isPalavra("one",p)) {
            cout << 1 << endl;
        } else if(isPalavra("two",p)) {
            cout << 2 << endl;
        } else if(isPalavra("three",p)) {
            cout << 3 << endl;
        }
    }
    return 0;
}

bool isPalavra(string palavra, string p) {
     int t = palavra.length();
     int tp = p.length();
     int chance = 0;

     if(t==tp) {
         for(int i=0; i<t; i++) {
                 if(palavra[i] != p[i]) {
                     chance++;
                     if(chance==2) {
                         return false;
                     }
                 }
         }
     } else {
         return false;
     }
     return true;
}
