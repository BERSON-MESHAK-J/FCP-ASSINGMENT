#include <stdio.h>

void reverseString(char* string) 
{
    int length = 0;
    int i;

    // Get the length of the string
    for(i = 0; string[i] != '\0'; i++) 
    {
        length++;
    }

    // Swap characters from both ends
    for(i = 0; i < length / 2; i++) 
    {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }
}

int main() 
{
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin); // read string including newline

    // Remove newline character
    string[strcspn(string, "\n")] = '\0';

    reverseString(string);

    printf("Reversed string: %s\n", string);

    return 0;
}