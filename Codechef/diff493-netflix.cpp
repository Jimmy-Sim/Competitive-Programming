#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (a + b >= d || a + c >= d || b + c >= d) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}