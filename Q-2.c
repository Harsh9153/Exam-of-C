#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

int main() {
    char sentence[MAX_LEN];
    int counts[26] = {0};

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);


    sentence[strcspn(sentence, "\n")] = '\0';

    
    for (int i = 0; i < strlen(sentence); i++) {
        char c = tolower(sentence[i]);

        
        if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            counts[c - 'a']++;
        }
    }

    printf("\nConsonant counts:\n");
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("'%c': %d\n", i + 'a', counts[i]);
        }
    }

    return 0;
}