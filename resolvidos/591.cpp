#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, j=0;
	int sum;
	int a, num, r;
	
	vector<int> v;
	
	cin >> t;
	while(t) {
		j++;
		r=0;
		sum=0;
		for(int i=0;i<t;i++) {
			cin >> a;
			sum += a;
			v.push_back(a);
		}
		num = sum / t;
		
		for(int i=0;i<t;i++) {
			a = v[i] - num;
			if(a>0)
				 r += a;
		}
		cout << "Set #" << j << endl;
		cout << "The minimum number of moves is " << r << "." << endl << endl;
		v.clear();
		cin >> t;
	}
	return 0;
}
