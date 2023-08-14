#include <stdio.h>

int num_vogais(char *p) {
    int count = 0;
    
    while (*p) {
        char c = *p;
            
        // Verifica se o caractere é uma vogal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
        
        p++; // Avança para o próximo caractere na string
    }
    
    return count;
}

int main() {
    printf("Número de vogais = %d\n", num_vogais("delta"));
    return 0;
}
