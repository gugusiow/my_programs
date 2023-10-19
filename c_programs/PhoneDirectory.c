#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// This function lists the phone numbers currently in the directory
void listnumbers()
{
    FILE *fp;
    char name[30];
    int number;

    // Open the phone directory file for reading
    fp = fopen("phones.txt", "r");
    if (fp == NULL) {
        printf("\nFailed to open the phone directory!\n");
        return;
    }

    // Print the phone directory one-by-one
    // The fscanf() function reads the phone entries until the
    // end-of-file (EOF) has been reached.
    printf("\n");
    while (fscanf(fp, "%s %d", name, &number) != EOF) {
        // Print one entry
        printf("Name: %-30s Phone: %08d\n", name, number);
    }

    // Close the file
    fclose(fp);
}

// This function adds a new phone number to the directory
void addnumber()
{
    FILE *fp;
    char name[30];
    int number;

    // Open the phone directory file for appending
    fp = fopen("phones.txt", "a");
    if (fp == NULL) {
        printf("\nFailed to open the phone directory!\n");
        return;
    }

    // Ask the user to provide the name and phone number
    // The name is assumed to have no space character and the phone number is an
    // eight-digit number.
    printf("\nPlease enter the name (without spaces): ");
    scanf("%s", name);

    printf("Please enter the phone number (an eight-digit number): ");
    scanf("%d", &number);

    // Add the entry to the file
    fprintf(fp, "%s %d\n", name, number);

    // Close the file
    fclose(fp);
}

int main()
{
    char choice;

    printf("Welcome to the phone directory!\n");

    do {
        // Print the main menu of the program
        // l) list all numbers in the directory
        // a) add a new entry in the directory
        // q) quit the program
        printf("\n");
        printf("l - List current phone numbers\n");
        printf("a - Add new phone number\n");
        printf("q - Quit the program\n\n");
        printf("Please select one of the above: ");

        // Get the choice, a character, from the user
        scanf(" %c", &choice);

        // Run the corresponding functions based on the choice
        switch (choice)
        {
        case 'l':
            listnumbers();
            break;
        case 'a':
            addnumber();
            break;
        }

        // Stop the loop (and the program) if the user selects 'q'
    } while (choice != 'q');

    printf("\nBye!\n");
}
