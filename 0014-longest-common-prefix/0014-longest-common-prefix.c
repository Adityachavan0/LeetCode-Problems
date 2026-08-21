char* longestCommonPrefix(char** strs, int strsSize) {
    char *op = malloc((strlen(strs[0]) + 1) * sizeof(char));
    int k = 0;

    while (1) {
        char ch = strs[0][k];
        int c = 0;

        // If first string ends, stop
        if (ch == '\0')
            break;

        for (int j = 1; j < strsSize; j++) {
            if (ch == strs[j][k]) {
                c++;
            }
        }

        // Not all strings have the same character
        if (c != strsSize - 1)
            break;

        op[k] = ch;
        k++;
    }

    op[k] = '\0';

    return op;
}