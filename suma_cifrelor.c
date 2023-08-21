#include <stdio.h>

int main()
{
    int n, cif, suma=0;

    scanf("%d", &n);
    
    while (n > 0) {
        cif = n % 10;
        suma += cif;
        n = n/10;
    }

    printf("%d", suma);

    return 0;
}
