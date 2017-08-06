

#include <stdio.h> 

#define LONGLINE 80 

int main()
{
  int c; 
  
  int sl = 0;
  while ( (c = getchar()) !=EOF ){
  	

  	if( c != '\n'){
  		
  		putchar(c);
  		++sl;

  		if(sl >= LONGLINE && c==' '){ 
  		 
  		  putchar('\n');
  		  sl = 0;
  	   }
  	}else{
  		
  		sl = 0;
  		putchar('\n');
  	}

  

 }
  return 0;
}

