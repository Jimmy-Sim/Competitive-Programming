#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a % (b * c) != 0) cout << a / (b * c) + 1 << '\n';
	    else cout << a / (b * c) << '\n';
	}
	
	return 0;
}