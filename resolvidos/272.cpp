#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    int i=0;
    int found=0;

    while (getline(cin, s)) { 
        found = s.find("\"");     
        while (found!=string::npos) {           
           if(i%2==0) {            
               s[found] = '`';
               s.insert(found, "`");               
            } else {
               s[found] = '\'';   
               s.insert(found, "'");                  
            }
            ++i;
            found = s.find("\"");
        }
        found = 0;
        cout << s << endl;
    }

    return 0;
}
