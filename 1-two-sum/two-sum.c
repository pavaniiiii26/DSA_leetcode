typedef struct {
    int key;
    int index;
    int used;
} HashEntry;

int hash(int key, int size) {
    int h = key % size;
    if (h < 0)
        h += size;
    return h;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int size = numsSize * 2 + 1;

    HashEntry* table = calloc(size, sizeof(HashEntry));

    for (int i = 0; i < numsSize; i++) {
        int needed = target - nums[i];
        int pos = hash(needed, size);

        while (table[pos].used) {
            if (table[pos].key == needed) {
                int* result = malloc(2 * sizeof(int));

                result[0] = table[pos].index;
                result[1] = i;

                *returnSize = 2;
                free(table);
                return result;
            }

            pos = (pos + 1) % size;
        }

        pos = hash(nums[i], size);

        while (table[pos].used) {
            pos = (pos + 1) % size;
        }

        table[pos].key = nums[i];
        table[pos].index = i;
        table[pos].used = 1;
    }

    *returnSize = 0;
    free(table);
    return NULL;
}