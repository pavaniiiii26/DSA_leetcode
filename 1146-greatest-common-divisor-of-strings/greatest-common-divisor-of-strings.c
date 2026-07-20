int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char temp1[len1 + len2 + 1];
    char temp2[len1 + len2 + 1];

    strcpy(temp1, str1);
    strcat(temp1, str2);

    strcpy(temp2, str2);
    strcat(temp2, str1);

    if (strcmp(temp1, temp2) != 0)
        return "";

    int length = gcd(len1, len2);

    char *ans = (char *)malloc((length + 1) * sizeof(char));

    strncpy(ans, str1, length);
    ans[length] = '\0';

    return ans;
}