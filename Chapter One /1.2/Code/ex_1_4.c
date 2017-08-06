#include <stdio.h> 

/* print a farenheit-celsius table for values of farenheit in the range
   [0, 300] */

int main (){ 
 
 float farh, celsius;
 float lower, upper, step; 

 lower = 0;
 upper = 300; 
 step = 5; 

 celsius = 0;
 farh = lower;
  
 printf("%s\t%s\n", "Celsius","Farenheit");

 while(farh<=upper){
 // calculate the temperature in celsius
 	celsius = ((farh*1.8))+32;   
 	printf("%3.0f %6.1f \n",farh, celsius);
 	farh = farh + step;
 }

} 
