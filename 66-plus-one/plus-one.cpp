#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from the last digit
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1; // Increment the current digit
                return digits; // No carry, return result
            }
            // If the digit is 9, set it to 0 and continue to the next digit
            digits[i] = 0;
        }
        
        // If all digits were 9, we need to add an extra digit at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
