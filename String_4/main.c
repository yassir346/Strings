#include <stdio.h>
#include <stdlib.h>


    int main()
{
    char c[50];


    printf("enter la 1er chaine de carachtere : ");

    scanf("%s", c);

    printf("la chaine de charactere est : %s\n", c);

    char m[50];

    printf("enter la 2eme chaine de carachtere : ");

    scanf("%s", m);

    printf("la chaine de charactere est : %s\n", m);

    int i = 0;
    int x = 0;

    while(c[i] != '\0' && m[i] != '\0'){

        if(c[i] != m[i]){

            x = 1;

            break;
        }
        i++;

    }

    if (x == 0){

        printf("ils sont egales");
    }
    else printf("ils ne sont pas égales");

    return 0;
}
