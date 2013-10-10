#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string input;
		
	while(getline(cin, input)) {
		t = input.length();
		for(int i=0; i<t; i++) {
			cout << (char) (input[i]-7); 
		}
		cout << endl;
	}
	return 0;
}
