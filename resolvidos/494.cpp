#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s, a="";
    char l;
    int t=0;
    
    while (getline(cin, s)) {
          for(int i = 0; i < s.size(); i++) {
                  l = s[i];

                  if( (l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z') ) {
                      a.push_back(l);
                  } else {
                      if(a.size() > 0) {
                           t++;                           
                      }
                      a.clear();
                  }                  
          }
          if(a.size() > 0) {
              t++;
          }
          a.clear();
          cout << t << endl;
          t=0;
    }
    return 0;
}
