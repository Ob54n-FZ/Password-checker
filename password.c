#include <stdio.h>
#include <string.h>
#include <ctype.h>

void checkPasswordStrength(char password[]) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else {
            hasSpecial = 1;
        }
    }

    printf("\nPassword Strength:\n");
    if (length < 8) {
        printf("Weak: Password should be at least 8 characters long.\n");
    } else if (hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Strong: Your password is secure.\n");
    } else if ((hasUpper + hasLower + hasDigit + hasSpecial) >= 3) {
        printf("Moderate: Consider adding more variety 2 ur password.\n");
    } else {
        printf("Weak: Your password needs more Heterogeneity.\n");
    }
}

int main() {
    char password[100];

    
    printf("Welcome to the Password Strength Checker.\n");
    printf("Enter your password:");
    scanf("%s", password);

    
    checkPasswordStrength(password);

    return 0;
}
