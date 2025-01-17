#include <stdio.h>

int main() {
    int larg, alt, i, j;
    char mapa[100][100], comand;
    scanf("%d", &larg);
    scanf("%d", &alt);
    for (i = 0; i < alt; i++) {
        for (j = 0; j < larg; j++) {
            scanf(" %c", &mapa[i][j]);
        }
    }

    if (mapa[0][0] != '>' && mapa[0][0] != 'v' && mapa[0][0] != '*') {
        printf("!\n");
        return 0;
    }
    int visit[alt][larg];
    for (i = 0; i < alt; i++) {
        for (j = 0; j < larg; j++) {
            visit[i][j]=0;
        }
    }
    i = 0;
    j = 0;
    comand = mapa[i][j];
    while (i >= 0 && i < alt && j >= 0 && j < larg) {
        if(visit[i][j]==1){
            printf("!\n");
            return 0;
        }
        visit[i][j]=1;
        if(mapa[i][j]=='>'||mapa[i][j]=='<'||mapa[i][j]=='v'||mapa[i][j]=='^'||mapa[i][j]=='*'){
            comand = mapa[i][j];
        }
        if (comand == '*') {
            printf("*\n");
            return 0;
        }
        if (comand == '>') {
            j++;
        } else if (comand == '<') {
            j--;
        } else if (comand == '^') {
            i--;
        } else if (comand == 'v') {
            i++;
        }
    }
    printf("!\n");
    return 0;
}
    
