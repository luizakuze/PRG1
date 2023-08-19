// Função para concatenar duas strings e colocar em uma terceira
void concatena(const char *str1, const char *str2, char *str3)
{
    int n, i;
    for (i = 0; str1[i] != '\0'; i++) {
        str3[i] = str1[i];
    }
    n = i;
    for (i = 0; str2[i] != '\0'; i++) {
        str3[i + n] = str2[i];
    }
    str3[i + n] = '\0'; // add caracter nulo
}
