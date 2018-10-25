#include <stdio.h>

int main() {
    int i, n, silnia = 1;
    printf("podaj n w przedziale od 0 do 15: ");
    scanf(" %i", &n);

    if (n > 0 && n < 15){
        for (i = 1; i <= n; i++){
            silnia = silnia * i;
        }
        printf("%i", silnia);
    } else {
        printf("podaj n w przedzialne od 0 to 15");
    }

    return 0;
}