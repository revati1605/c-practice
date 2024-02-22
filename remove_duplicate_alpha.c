#include <stdio.h>

int main() {
    char st1[20];
    int i, j, len;

    printf("Enter string: ");
    scanf("%[^\n]", st1);

    // Calculate the length of the string
    for (len = 0; st1[len] != '\0'; len++);

    // Remove duplicate characters
    for (i = 0; i < len; i++) {
        for (j = i + 1; st1[j] != '\0';) {
            if (st1[i] == st1[j]) {
                // If a duplicate character is found, shift all characters to the left
                for (int k = j; st1[k] != '\0'; k++) {
                    st1[k] = st1[k + 1];
                }
                len--; // Reduce the length of the string
            } else {
                j++; // Move to the next character
            }
        }
    }

    printf("After removal of duplicate characters: %s\n", st1);

    return 0;
}

