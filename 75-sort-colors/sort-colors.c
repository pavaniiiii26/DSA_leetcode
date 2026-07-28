//dutch nation flag
void sortColors(int* nums, int numsSize) {
    int zero = 0;
    int mid = 0;
    int two = numsSize - 1;
    int temp;

    while (mid <= two) {
        if (nums[mid] == 0) {
            temp = nums[zero];
            nums[zero] = nums[mid];
            nums[mid] = temp;

            zero++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            temp = nums[mid];
            nums[mid] = nums[two];
            nums[two] = temp;

            two--;
        }
    }
}