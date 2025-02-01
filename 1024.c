#include <string.h>
#include <stdio.h>

int main(){
    int n, m;
    char aux, str[1001];

    scanf("%d\n", &n);

    for(int i = 0; i < n; ++i){
        scanf("%[^\n]\n", str);

        m = strlen(str);
        for(int j = 0; j < m; ++j){
            if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')) {
                str[j] += 3;
            }
        }
        for(int j = 0; j < m / 2; ++j){
            aux = str[j];
            str[j] = str[m - 1 - j];
            str[m - 1 - j] = aux;
        }
        for(int j = m / 2; j < m; ++j){
            --str[j];
        }

        printf("%s\n", str);
    }

    return 0;
}
