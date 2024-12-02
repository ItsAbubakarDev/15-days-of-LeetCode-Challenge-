#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int prevValue = 0;

        // Traverse the string from right to left
        for (int i = s.size() - 1; i >= 0; --i) {
            int currentValue = romanValues[s[i]];
            
            // If the current value is less than the previous value, subtract it
            if (currentValue < prevValue) {
                total -= currentValue;
            } else {
                // Otherwise, add it to the total
                total += currentValue;
            }

            // Update the previous value
            prevValue = currentValue;
        }

        return total;
    }
};
