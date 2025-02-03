#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 

    while (n--) {
        char *itens[1000];
        int item_count = 0;
        char line[1000 * 21];

        fgets(line, sizeof(line), stdin);
        char *token = strtok(line, " \n");

        while (token != NULL) {
            int is_duplicate = 0;
            for (int i = 0; i < item_count; i++) {
                if (strcmp(itens[i], token) == 0) {
                    is_duplicate = 1;
                    break;
                }
            }
            if (!is_duplicate) {
                itens[item_count] = malloc(strlen(token) + 1);
                strcpy(itens[item_count], token);
                item_count++;
            }
            token = strtok(NULL, " \n");
        }

        qsort(itens, item_count, sizeof(char *), cmp);

        for (int i = 0; i < item_count; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%s", itens[i]);
            free(itens[i]);
        }
        printf("\n");
    }

    return 0;
}
