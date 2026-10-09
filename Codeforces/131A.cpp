// Aug. 11, 2026

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;

    string remainingAllUpper = word;
    for (int i = 1; i < word.size(); i++) remainingAllUpper[i] = toupper(remainingAllUpper[i]);

    bool remainingAllUppercase = (word == remainingAllUpper);

    if (remainingAllUppercase) {
        for (int i = 0; i < word.size(); i++) {
            if (word[i] < 97) word[i] = tolower(word[i]);
            else word[i] = toupper(word[i]);
        }
    }

    cout << word << '\n';
    
    return 0;
}