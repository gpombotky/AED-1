#include <stdio.h>
 
int main() {
    int ida,dia,ano,mes;
    scanf("%d",&ida);
    ano=ida/365;
    ida=ida%365;
    mes=ida/30;
    ida=ida%30;
    dia=ida;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
    return 0;
}
