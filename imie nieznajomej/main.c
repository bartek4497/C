#include <stdio.h>
#include <string.h>
int main(){
    int i, s;
    char slowo[15];

    //printf("Podaj imie nieznajomej od tylu\n");
    scanf( "%s", & slowo );

    for(i=strlen(slowo)-1; i>=0; i--)
    {
    printf("%c", slowo[i]);
    }
return 0;
}

