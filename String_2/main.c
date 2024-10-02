#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[50];

    printf("enter la chaine de carachtere : ");

    scanf("%s", c);

    printf("la chaine de charactere est : %s\n", c);

    int i = 0;

    while( c[i] != '\0'){

        i++;

    }

    printf("la longeur est %d", i);



    return 0;
}
