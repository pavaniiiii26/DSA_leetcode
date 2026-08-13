int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

    int start = 0;
    int end = numbersSize - 1;

    int* result = malloc(2 * sizeof(int));

    while (start < end) {

        int sum = numbers[start] + numbers[end];

        if (sum == target) {
            result[0] = start + 1;
            result[1] = end + 1;
            *returnSize = 2;
            return result;
        }

        if (sum < target) {
            start++;
        }
        else {
            end--;
        }
    }

    *returnSize = 0;
    return NULL;
}