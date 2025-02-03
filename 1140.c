#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    
    while (1) {
        fgets(frase, sizeof(frase), stdin);
        
        if (frase[0] == '*') {
            break;
        }
        
        int i = 0;
        while (frase[i] == ' ') i++;
        
        char primeira_letra = (frase[i] >= 'a' && frase[i] <= 'z') ? frase[i] : frase[i] + 32;
        int tautograma = 1;
        
        while (frase[i] != '\0') {
            while (frase[i] == ' ') i++;
            if (frase[i] == '\0') break;
            char letra = (frase[i] >= 'a' && frase[i] <= 'z') ? frase[i] : frase[i] + 32;
            
            if (letra != primeira_letra) {
                tautograma = 0;
                break;
            }
            
            while (frase[i] != ' ' && frase[i] != '\0') i++;
        }
        
        if (tautograma) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    
    return 0;
}
