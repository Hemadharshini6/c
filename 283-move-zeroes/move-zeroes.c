void moveZeroes(int* nums, int numsSize) {
    int k = 0;

    // Move all non-zero elements to front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Fill remaining positions with zero
    while (k < numsSize) {
        nums[k] = 0;
        k++;
    }
}