#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generateRandomChar() {
    /* Generate a random character between '!' and '~' */
    return rand() % ('~' - '!' + 1) + '!';
}

void generateRandomPassword(char *password) {
    int i;
    for (i = 0; i < PASSWORD_LENGTH - 1; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH - 1] = '\0';
}

int main() {
    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random password */
    char password;
    generateRandomPassword(password);

    /* Print the generated password */
    printf("Generated Password: %s\n", password);

    return 0;
}
