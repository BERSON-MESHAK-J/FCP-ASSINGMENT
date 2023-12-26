#include <stdio.h>
#include <stdlib.h>

void writeData(FILE *file) 
{
    int num;
    printf("Enter number to be added: ");
    scanf("%d", &num);
    fprintf(file, "%d\n", num);
}

void readData(FILE *file) 
{
    int num;
    printf("Numbers in the file:\n");
    while(fscanf(file, "%d", &num) != EOF) {
        printf("%d\n", num);
    }
}

void appendData(FILE *file) 
{
    int num;
    printf("Enter number to be appended: ");
    scanf("%d", &num);
    fseek(file, 0, SEEK_END);
    fprintf(file, "%d\n", num);
}

int main() 
{
    FILE *file;
    int choice;

    file = fopen("data.txt", "a+");
    if(file == NULL) 
    {
        printf("Error in opening the file.\n");
        exit(1);
    }

    do 
    {
        printf("\nChoose an option:\n");
        printf("1. Write data.\n");
        printf("2. Read data.\n");
        printf("3. Append data.\n");
        printf("4. Exit.\n");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                writeData(file);
                break;
            case 2:
                readData(file);
                break;
            case 3:
                appendData(file);
                break;
            case 4:
                fclose(file);
                printf("File closed successfully.\n");
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    } while(choice != 4);

    return 0;
}