class Solution {
public:
    string reverseWords(string s) {
        // Trim leading and trailing spaces and split words
        vector<string> words;
        string word;
        for (char c : s) {
            if (c != ' ') {
                word += c; // Add character to the current word
            } else if (!word.empty()) {
                words.push_back(word); // Add word to the list
                word.clear();          // Clear for next word
            }
        }
        if (!word.empty()) words.push_back(word); // Add the last word

        // Reverse the order of words
        reverse(words.begin(), words.end());

        // Join words with a single space
        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i];
        }

        return result;
    }
};
