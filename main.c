/*
 *  main.c
 *
 *  Edited:    November 5, 2020
 *  Author(s): Cornell
 */
 
 #include <stdio.h>
 
 int main (void)
 {
	 float testMetric;
	 float testImperial;
	 printf("This is to test metricToImperial.c");
	 printf("Enter how many meters: ");
	 scanf("%f", &testMetric);
	 testImperial = convert(testMetric);
 }