#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (3 * a <= b) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}