#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    // Count the frequency of each character in the string
    for (char c : s) {
        charCount[c]++;
    }

    // Find the first non-repeating character and return its index
    for (int i = 0; i < s.length(); ++i) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    // If no non-repeating character is found, return -1
    return -1;
}

int main() {
    string input = "leetcode";

    int result = firstUniqChar(input);

    if (result != -1) {
        cout << "The first non-repeating character is at index: " << result << endl;
    } else {
        cout << "No non-repeating character found in the string." << endl;
    }

    return 0;
}
