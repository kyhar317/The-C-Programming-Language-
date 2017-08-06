#include <stdio.h> 

/* print a farenheit-celsius table for values of farenheit in the range
   [0, 300] */

int main (){ 
 
 float farh, celsius;
 float lower, upper, step; 

 lower = 0;
 upper = 300; 
 step = 20; 

 farh = lower;
  
 printf("%s\t%s\n", "Celsius","Farenheit");
 while(celsius<=upper){
 // calculate the temperature in celsius
 	farenheit = (9.0/5.0)*(farh+32);   
 	printf("%3.0f %6.1f \n",celsius, farh);
 	farh = farh + step;
 }

} 
