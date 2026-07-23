bool isValid(char *s) {
    char stack[10000];
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[top] = c;
            top++;
        }
        else {
            if (top == 0) return false;  

            top--;
            char last = stack[top];

            if (c == ')' && last != '(') return false;
            if (c == '}' && last != '{') return false;
            if (c == ']' && last != '[') return false;
        }
    }

    return top == 0;  
}