#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200], ch;
    int c = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count in lowercase: ");
    scanf("%c", &ch);


    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == ch) {
            c++;
        }
    }

    printf("Character '%c' occurs %d times.\n", ch, c);

    return 0;
}