#include <stdio.h>
#include <string.h>

void concatenate(char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter 1st string: ");
    gets(str1);

    // getchar(); // consume the leftover newline character?

    printf("Enter 2nd string: ");
    gets(str2);

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
