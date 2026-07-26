//bubble sort
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {

    for (int i = 0; i < namesSize - 1; i++) {

        for (int j = 0; j < namesSize - 1; j++) {

            if (heights[j] < heights[j + 1]) {

                // Swap heights
                int temp = heights[j];
                heights[j] = heights[j + 1];
                heights[j + 1] = temp;

                // Swap names
                char *tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }

    *returnSize = namesSize;
    return names;
}