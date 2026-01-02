#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else if (!isspace(password[i]) && !isalnum(password[i])) hasSpecial = 1;
    }

    printf("Password Strength: ");
    if (strlen(password) < 6) printf("Very Weak\n");
    else if (hasUpper && hasLower && hasDigit && hasSpecial) printf("Strong\n");
    else if ((hasUpper || hasLower) && hasDigit) printf("Moderate\n");
    else printf("Weak\n");

    return 0;
}