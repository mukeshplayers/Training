/*
Program Definition: Accessing structure member through pointer using dynamic memory allocation.
*/

/******************************************************************************
 *
 * @file    2_StructureProgram.c
 * @author  Mukesh Prajapati
 * @brief   Accessing structure member through pointer using dynamic memory allocation.
 * @date
 *          FEB/12/2018,Created
 *****************************************************************************/

/******************************************************************************
The program works in following manner:

User is aksed to input total number of persons.
User is aksed to input name, age and weight and displayed the same information.

*****************************************************************************/


/***************
 * Include Files
 ***************/
#include <stdio.h> 
#include <stdlib.h>

/******************************************************************************
 *                      Structure Definition
 *****************************************************************************/
/*! \struct person
	\brief Person information
*/
struct person {
	/*! \var age
		\brief person's age
	*/
	int age;

	/*! \var weight
		\brief person's weight
	*/
	float weight;
	/*! \var name
		\brief person's name
	*/
	char name[10]; /* Character variable for name */
};

/** Function    main
 * @date        FEB/12/2018
 * @brief       Main function of the program.
 * @param       None
 * @return      int : the result of execution.
 *		        0: success
 *		        -ve: on various failures.
 */
int main()
{
	struct person *ptr; /*structure variable*/
	int i, num; /* integer variable num for total number of input 
	  integer variable i for iteration*/

	printf("Enter number of persons: ");
	scanf("%d", &num); /* taking input from user*/

	ptr = (struct person*) malloc(num * sizeof(struct person));
	/*Above statement allocates the memory for n structures with pointer personPtr pointing to base address */

	//loop until the number entered by user
	for(i = 0; i < num; ++i)
	{
		printf("Enter name, age and weight of the person respectively:\n");
		scanf("%s %d %f", &(ptr+i)->name, &(ptr+i)->age, &(ptr+i)->weight); /* taking name, age & weight as an input from user */
	}

	//Displaying information entered by user
	printf("Displaying Infromation:\n");
	for(i = 0; i < num; ++i)
	{
		printf("%s\t%d\t%.2f\n", (ptr+i)->name, (ptr+i)->age, (ptr+i)->weight);
	}
	return 0;
} //End of main

