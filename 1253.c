#include <string.h>
#include <stdio.h>

int main(){
    char a[51];
    int n, d;

    scanf("%d\n", &n);

    for(int i = 0; i < n; ++i){
        scanf("%[^\n]\n", &a);
        scanf("%d\n", &d);

        for(int j = 0; j < strlen(a); ++j){
            a[j] = ((a[j] - 'A' - d + 26) % 26) + 'A';
        }

        printf("%s\n", a);
    }

    return 0;
}
