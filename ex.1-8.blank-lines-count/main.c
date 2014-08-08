#include <stdio.h>

int main()
{
    int c, newlines, blanks, tabs, prev;

    newlines = blanks = tabs = 0;

    while ((c = getchar()) != EOF) {
	if (c == '\n') {
	    ++newlines;

	    // 2 consecutive new lines is a blank
	    if(prev == '\n')
		++blanks;
	}
	else if (c == '\t')
	    ++tabs;
	prev = c;
    }

    printf("\nNew lines:\t%d\nBlanks:\t\t%d\nTabs:\t\t%d\n\n", newlines, blanks, tabs);

    return 0;
}
