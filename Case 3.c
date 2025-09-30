#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char str[1005];
    char words[305][75]; 
    int used[305] = {0}; 
    int count = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++) {
        int duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            if (i > 0) printf(" "); 
            printf("%s", words[i]);
        }
    }
    printf("\n");

    return 0;
}
