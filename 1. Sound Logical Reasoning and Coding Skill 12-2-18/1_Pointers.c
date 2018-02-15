/*
Program Definition: Printing all alphabets using pointer.
*/

/******************************************************************************
 *
 * @file    1_Pointers.c
 * @author  Mukesh Prajapati
 * @brief   This program displays all the alphabets using pointer.
 * @date
 *          FEB/12/2018,Created
 *****************************************************************************/

/******************************************************************************
The program works in following manner:

An array of type character size 25 is used to store alphabets.

Iterate loop to total number of alphabets(26) and get the ASCI value from character pointer.

Iterate loop to display the alphabets.

*****************************************************************************/

/***************
 * Include Files
 ***************/

#include <stdio.h>


/** Function    main
 * @date        FEB/12/2018
 * @brief       Main function of the program.
 * @param       None
 * @return      int: the result of execution.
 *		        0: success
 *		        -ve: on various failures.
 */
int main()
{
	char alphabet[25]; /*character alphabet array for 26 alphabets */
	int x; //integer x for iteration
	char *ptr; //character pointer ptr
	printf("\n\n Pointer : Print all the alphabets:\n"); 
	printf("----------------------------------------\n");
	ptr = alphabet;
     
	/*getting respective alphabet value by adding ASCI value*/
	for(x=0;x<26;x++)
	{
		*ptr=x+'A';
		 ptr++;
	}

	ptr = alphabet;
	printf(" The Alphabets are : \n");

	/*printing alphabets*/
	for(x=0;x<26;x++)
	{
		printf(" %c ", *ptr);
		ptr++;
	}
	printf("\n\n");

	return(0);
} //End of main

