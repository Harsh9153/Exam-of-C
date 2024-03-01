#include <stdio.h>

int main() {
    FILE *file_write, *file_read;
    char sentence[] = "This is a sentence to be written into a file and read from it.";
    char read_sentence[100];

    // Write the sentence into a file
    file_write = fopen("C:\Users\harsh\OneDrive\Desktop\Exam.c\sentence.txt", "w");
    if (file_write == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fputs(sentence, file_write);
    fclose(file_write);

    // Read the sentence from the file
    file_read = fopen("C:\Users\harsh\OneDrive\Desktop\Exam.c\sentence.txt", "r");
    if (file_read == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }
    fgets(read_sentence, sizeof(read_sentence), file_read);
    fclose(file_read);

    // Write the read sentence into another file
    file_write = fopen("C:\Users\harsh\OneDrive\Desktop\Exam.c\read_sentence.txt", "w");
    if (file_write == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fputs(read_sentence, file_write);
    fclose(file_write);

    return 0;
}