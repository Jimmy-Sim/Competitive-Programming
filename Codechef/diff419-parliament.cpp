#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        if (a <= 2 * b) cout << "YES\n";
        else cout << "NO\n";
    }
    
	return 0;
}