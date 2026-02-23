int maxSubArray(int* nums, int numsSize) {
    
    int currentSum = nums[0];
    int maxSum = nums[0];
    
    for(int i = 1; i < numsSize; i++) {
        
        // If current sum becomes negative, start new subarray
        if(currentSum < 0)
            currentSum = nums[i];
        else
            currentSum += nums[i];
        
        // Update maximum sum
        if(currentSum > maxSum)
            maxSum = currentSum;
    }
    
    return maxSum;
}