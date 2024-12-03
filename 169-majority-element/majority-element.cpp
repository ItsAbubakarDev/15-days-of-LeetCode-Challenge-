class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;

        // Phase 1: Find a candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Phase 2: The problem guarantees that the candidate is valid, so we can return it
        return candidate;
    }
};
