#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (a < b) cout << "PROFIT\n";
	    else if (a == b) cout << "NEUTRAL\n";
	    else cout << "LOSS\n";
	}
	
	return 0;
}