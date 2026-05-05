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
 * @file <stats.h> 
 * @brief <assesment 1>
 *
 * <Introduction to Embedded Systems - Module 1 - assesment 1>
 *
 * @author <Federico March>
 * @date <05/05/2026>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief <Print Array statistics>
 *
 * <This function prints the statistics of an array including minimum, maximum, mean and median.>
 *
 * @param <array> <unsigned char pointer to an n-element data array>
 * @param <size> <unsigne integer as the size of the array>
 *
 * @return <None>
 */
void print_statistics(unsigned char *array);

/**
 * @brief <Print Array on screen>
 *
 * <This function prints the array on screen.>
 *
 * @param <array> <unsigned char pointer to an n-element data array>
 * @param <size> <unsigne integer as the size of the array>
 *
 * @return <None>
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief <Returns the median value of a given n-element data array>
 *
 * <This function returns the median value of an n-element data array.>
 *
 * @param <array> <unsigned char pointer to an n-element data array>
 * @param <size> <unsigne integer as the size of the array>
 *
 * @return <unsigned char>
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief <Returns the mean value of a given n-element data array>
 *
 * <This function returns the mean value of an n-element data array.>
 *
 * @param <array> <unsigned char pointer to an n-element data array>
 * @param <size> <unsigne integer as the size of the array>
 *
 * @return <unsigned char>
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief <Returns the maximum value of a given n-element data array>
 *
 * <This function returns the maximum value of an n-element data array.>
 *
 * @param <array> <unsigned char pointer to an n-element data array>
 * @param <size> <unsigne integer as the size of the array>
 *
 * @return <unsigned char>
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief <Returns the minimum value of a given n-element data array>
 *
 * <This function returns the minimum value of an n-element data array.>
 *
 * @param <array> <unsigned char pointer to an n-element data array>
 * @param <size> <unsigne integer as the size of the array>
 *
 * @return <unsigned char>
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief <Sorts the array from the largest to the smallest>
 *
 * <This function sorts an n-element data array from the largest value to the smallest.>
 *
 * @param <array> <unsigned char pointer to an n-element data array>
 * @param <size> <unsigne integer as the size of the array>
 *
 * @return <unsigned char>
 */
void sort_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */