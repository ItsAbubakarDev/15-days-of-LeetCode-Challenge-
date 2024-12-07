class Solution {
    public int maxSubArray(int[] nums) {
        int maxSum = nums[0]; // Initialize with the first element
        int currentSum = nums[0]; // Tracks the current subarray sum
        
        for (int i = 1; i < nums.length; i++) {
            // Extend the current subarray or start a new one
            currentSum = Math.max(nums[i], currentSum + nums[i]);
            // Update the maximum sum found so far
            maxSum = Math.max(maxSum, currentSum);
        }
        
        return maxSum; // Return the maximum sum
    }
}
