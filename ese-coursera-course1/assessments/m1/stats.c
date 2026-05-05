/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.ce> 
 * @brief <assesment 1>
 *
 * <Introduction to Embedded Systems - Module 1 - assesment 1>
 *
 * @author <Federico March>
 * @date <05/05/2026>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40) // definisce una costante simbolica

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};



  /* Other Variable Declarations Go Here */
  unsigned char mean = find_mean(test, SIZE);


  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  printf("Mean Value: %d\n", mean);

}

/* Add other Implementation File Code Here */

// in una funzione in c un array viene visto come un puntatore al primo elemento dell'array
void print_array(unsigned char *array, unsigned int size){

	printf("Array:\n");
	
	for (int i = 0; i < size; i ++) {

		printf("%d", array[i]);

		if (i != size - 1) {

			printf(", ");
		}
		else {

			printf("\n");

		}

}

unsigned char find_mean(unsigned char *array, unsigned int size)
{
  unsigned char mean = 0;

  for (int i = 0; i < size; i++) {

    // sum every element of the array
    mean = mean + array[i];
  }

  // compute and return the mean value 
  return mean / size;

}

}