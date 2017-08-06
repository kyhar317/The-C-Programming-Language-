
/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines. 

	Program counts blanks, tabs and new lines by using escape sequences 
	and the getchar function. 

*/ 
#include <stdio.h> 



int main(){

	int c; 

	int blanks;
	int tabs; 
	int newlines;

	blanks = tabs = newlines = 0;

	while( (c = getchar()) != EOF){
		if(c=='\n')
			++newlines;

		if(c==' ')
			++blanks;

		if(c=='\t')
			++tabs; 
    }

    printf("%s%d%s%d%s%d", "blanks: " , blanks, "tabs: ",tabs, "newlines:  ", newlines);

	return 0;
}