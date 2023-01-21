//
// Created by Sunny on 1/20/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


int main()
{
    int a;
    int n;

    /* seed the randomizer */
    srand( (unsigned)time(NULL) );

    printf("Today's random word: ");
    for(a=0;a<7;a++)
        putchar( randchar(n) );
    putchar('\n');

    printf("%c", randchar(n));

    return(0);
}
