#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char str1[51], str2[51], resultado[101];
        int i = 0, j = 0, k = 0;
        
        scanf("%s %s", str1, str2);
        
        while (str1[i] != '\0' && str2[j] != '\0') {
            resultado[k++] = str1[i++];
            resultado[k++] = str2[j++];
        }

        while (str1[i] != '\0') {
            resultado[k++] = str1[i++];
        }

        while (str2[j] != '\0') {
            resultado[k++] = str2[j++];
        }

        resultado[k] = '\0';

        printf("%s\n", resultado);
    }

    return 0;
}
