#include <iostream>
#include <stack>
using namespace std;

bool adicionar(char c);

stack<char> pilha;

int main() {
	int ct;
	string s;
	int tam;
	bool v = true;
	
	cin >> ct;
	getline(cin,s);
	for(int i=0; i<ct; i++) {
		//cin >> s;
		getline(cin,s);
		
		tam = s.length();
		//cout << s << endl;
		for(int j=0;j<tam;j++) {
			if( ! adicionar(s[j]) ) {
				v = false;
				break;
			}
		}
		if(pilha.empty() && v) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
			while(!pilha.empty()) pilha.pop();
		}		
		v = true;
		s="";
	}
	return 0;
}

bool adicionar(char c) {
	if(c=='(' || c=='[') {
		//cout << "empilhou " << c << endl;
		pilha.push(c);
	} else if(c==')' || c==']'){
		if(pilha.empty()) {
			return false;
		} else {
			if(c==')') {
				if(pilha.top()=='(') {
					//cout << "desempilhou " << "(" << endl;
					pilha.pop();
				} else {
					return false;
				}
			} else if(c==']') {
				if(pilha.top()=='[') {
					//cout << "desempilhou " << "[" << endl;
					pilha.pop();
				} else {
					return false;
				}
			}
		}
	}
	return true;
}
