#include <stdio.h>

int main()
{
    int input, prev, prev2, ctr;
    char output[256] = {};

    input = prev = prev2 = ctr = 0;

    while (ctr < (256 - 1) && (input = getchar()) != EOF) {
	// check if has previous two blanks
	if(input == '\n' && prev == '\n' && prev2 == '\n')	    
	    continue;

	// add to the string
	output[ctr] = input;
	ctr += 1;

	prev2 = prev;
	prev = input;
    }

    output[ctr] = '\0'; // terminator

    printf("\n\nOutput:\n%s\n", output);

    return 0;
}
