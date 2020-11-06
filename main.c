/*
 *  main.c
 *
 *  Edited:    November 5, 2020
 *  Author(s): Cornell
 */
 
 #include <stdio.h>
 
 int main (void)
 {
	 float meters;
	 float feet;
	 printf("This is to test metersToFeet function \n");
	 printf("Enter how many meters: \n");
	 scanf("%f", &meters);
	 feet = convertMetersToFeet(meters);
	 printf("%f meter(s) = %f feet \n", meters, feet);
	 printf("TEST COMPLETED FOR METERS TO FEET");
 }