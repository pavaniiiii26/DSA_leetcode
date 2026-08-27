void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int *nums, int n, int i) {
    while (1) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] > nums[largest])
            largest = left;

        if (right < n && nums[right] > nums[largest])
            largest = right;

        if (largest == i)
            break;

        swap(&nums[i], &nums[largest]);
        i = largest;
    }
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    
    // Build max heap
    for (int i = numsSize / 2 - 1; i >= 0; i--) {
        heapify(nums, numsSize, i);
    }

    // Heap sort
    for (int i = numsSize - 1; i > 0; i--) {
        swap(&nums[0], &nums[i]);
        heapify(nums, i, 0);
    }

    *returnSize = numsSize;
    return nums;
}