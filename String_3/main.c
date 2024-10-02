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

    int i = 0 , j = 0;

    while (c[i] != '\0') i++;

    while (m[j] != '\0'){

        c[i] = m[j];
        i++;
        j++;

    }

    c[i]= '\0';


    printf("la concatenation est : %s", c);




    return 0;
}
