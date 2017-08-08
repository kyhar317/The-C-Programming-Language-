/*
Exercise 2-2 (K&R):
 Write a loop equivalent to the for loop above without using && or ||.
 This program is identical to exercise 1-9, however the for loop is modified to omit
 the presence of && and ||
*/

#include <stdio.h>
#include <stdlib.h>
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
    i = 0;
    while(i < lim -1){
        if((c=getchar())!=EOF){
            if(c!='\n'){
                ++i;
                s[i] = c;
            }else{
                break;
            }
        }
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