/* 
 This program reads a set of text lines and prints the longest. To do so, the following 
 structure will be used: 

 while(there's another line)
 	if(its longer than the previous line)
 	  save it 
 	  save the length
 print the longest line 

 This will be done by using character arrays 
*/

#include <stdio.h> 
#define MAXLINE 1000 // maximum input line length 

/* function prototypes */
int getLine(char line [], int maxline);
void copy(char to[], char from []);

/* print the longest input line */ 
int main(){

	int len, max;
	char line[MAXLINE]; // current input line
	char longest[MAXLINE]; // character array to store the maxiumum line 

	max = 0; 

	while ( (len = getLine(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
			printf("%s%s\t%s%d\n", "longest line: ", longest, " Length: ", len);
		}
	}

	/*if(max > 0){
		printf("%s\n", longest); // there was a longest line, so print it
	}*/
	
	return 0;
}


/* get line - read a line into s and return the length */ 
int getLine(char s[], int lim){
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) s[i] = c;
       if (c == '\n') {
           s[i] = c;
			++i; 
		}
	s[i] = '\0';
	return i;
}

/* copy the characters from into to, assuming that it's big enough */ 
void copy(char to[], char from []){
	int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
		++i;
}