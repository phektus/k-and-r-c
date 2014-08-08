#include <stdio.h>

int main()
{
    int input, ctr, step;
    char output[256] = {};

    input = ctr = 0;

    while (ctr < (256 - 1) && (input = getchar()) != EOF) {
	step = 2;

	if(input == '\t') {
	    output[ctr] = '\\';
	    output[ctr+1] = 't';
	} 
	else if (input == '\b') {
	    output[ctr] = '\\';
	    output[ctr+1] = 'b';
	}
	else if (input == '\\') {
	    output[ctr] = '\\';
	    output[ctr+1] = '\\';
	}
	else {
	    step = 1;
	    output[ctr] = input;
	}

	ctr += step;
    }

    output[ctr] = '\0'; // terminator

    printf("\n\nOutput:\n%s\n", output);

    return 0;
}
