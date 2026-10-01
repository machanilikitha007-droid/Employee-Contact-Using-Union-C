#include <stdio.h>

union Contact {
    long long phone;
    char email[100];
};

int main() {
    union Contact contact;
    int choice;

    printf("===== Employee Contact Details =====\n");
    printf("1. Store Phone Number\n");
    printf("2. Store Email Address\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Phone Number: ");
        scanf("%lld", &contact.phone);

        printf("\nPhone Number: %lld\n", contact.phone);
    }
    else if (choice == 2) {
        printf("Enter Email Address: ");
        scanf(" %[^\n]", contact.email);

        printf("\nEmail Address: %s\n", contact.email);
    }
    else {
        printf("Invalid choice!\n");
    }

    printf("\nThe union stores one value at a time.\n");

    return 0;
}
