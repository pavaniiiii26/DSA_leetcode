int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {

    int temp;
    // Bubble Sort
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target)
            count++;
    }

    *returnSize = count;

    int *ans = (int *)malloc(count * sizeof(int));

    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            ans[k++] = i;
        }
    }

    return ans;
}