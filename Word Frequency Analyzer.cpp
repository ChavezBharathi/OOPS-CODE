#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> words = {"apple", "banana", "apple", "cherry", "banana", "apple"};
    map<string, int> frequencyMap;

    // Count occurrences
    for (const string& s : words) {
        frequencyMap[s]++;
    }

    cout << "Word Frequencies:" << endl;
    for (auto const& [word, count] : frequencyMap) {
        cout << word << ": " << count << endl;
    }

    return 0;
}
