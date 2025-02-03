#include <stdio.h>

int main() {
    char str[51];
    
    while (fgets(str, sizeof(str), stdin)) {
        int i = 0;
        int is_upper = 1;
        
        while (str[i] != '\0' && str[i] != '\n') {
            if (str[i] != ' ') {
                if (is_upper) {
                    if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 'a' + 'A';
                    }
                } else {
                    if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] - 'A' + 'a';
                    }
                }
                is_upper = !is_upper;
            }
            i++;
        }
        printf("%s", str);
    }

    return 0;
}
