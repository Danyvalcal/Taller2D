#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Entrada: ");
    printf("Salida: ");
    
    for (int i = 0, n = strlen(s); i < n; i++) 
    {
        printf("%c", s[i]);
    }
    printf("\n");
}