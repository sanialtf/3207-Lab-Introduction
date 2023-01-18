#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include  "random.h" TODO



int main()
{
    // randchar() in random.c
    // return random letter TODO
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

