//method one
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    
    if (k == 0)
    return;

    int temp[k];
    // Copy last k elements
    for (int i = 0; i < k; i++) {
        temp[i] = nums[numsSize - k + i];
    }

    // Shift remaining elements to the right
    for (int i = numsSize - k - 1; i >= 0; i--) {
        nums[i + k] = nums[i];
    }

    // Put temp elements at the beginning
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
}