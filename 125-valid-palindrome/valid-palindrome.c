bool isPalindrome(char* s) {
    int start = 0;
    int end = strlen(s) - 1;

while (start < end) {

    // Skip spaces and special characters from left
    while (start < end && !isalnum(s[start])) {
        start++;
    }
    // Skip spaces and special characters from right
    while (start < end && !isalnum(s[end])) {
        end--;
    }

    // Compare lowercase characters
    if (tolower(s[start]) != tolower(s[end])) {
        return false;
    }

start++;
end--;
}

return true;
}