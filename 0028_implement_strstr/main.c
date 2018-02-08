#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int strStr(char* haystack, char* needle) {

	int ls, lp, found;

	if(!haystack || !needle) {

		if(!haystack && !needle)
			return 0;

		return -1;
	}

	ls = strlen(haystack);
	lp = strlen(needle);

	if(lp == 0)
		return 0;

	if(ls < lp)
		return -1;

	for(int i = 0; i < ls; i++) {

		found = 1;
		for(int j = 0; j < lp && found; j++) {
			if(haystack[i + j] != needle[j])
				found = 0;
		}

		if(found == 1)
			return i;
	}
	return -1;
}


int main()
{
	char *h = "";
	char *n = "";
	printf("%d\n", strStr(h, n));
}
