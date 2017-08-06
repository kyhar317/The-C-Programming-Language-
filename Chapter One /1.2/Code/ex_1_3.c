#include <stdio.h> 

int main(){

 float farh, celsius;
 float lower, upper, step; 

 lower = 0;
 upper = 300; 
 step = 20; 

 farh = lower;
  
 printf("%s\t%s\n", "Celsius", "Farenheit");
 printf("%s\n", "");
 while(farh<=upper){
 // calculate the temperature in celsius
 	celsius = (5.0 / 9.0)*(farh-32);   
 	printf("%3.0f %6.1f \n",farh, celsius);
 	farh = farh + step;
 }
	return 0;
}