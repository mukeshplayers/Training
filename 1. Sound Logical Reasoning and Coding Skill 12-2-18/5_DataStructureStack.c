/*
Program Definition: Stack data structure implementation using Structure.
*/

/******************************************************************************
 *
 * @file    5_DataStructureStack.c
 * @author  Mukesh Prajapati
 * @brief   This file folds long input lines in to shorter lines.
 * @date
 *          FEB/13/2018,Created
 *****************************************************************************/

/******************************************************************************
The program works in following manner:

Main function displays the stack operation for user wheather what user wants to do. PUSH, POP, DISPLAY & EXIT options are displayed.

User is asked to enter choice from the displayed options.

The choice is switched through the respective function.

According to that operation on the stack is performed.

******************************************************************************/


/***************
 * Include Files
 ***************/

#include <stdio.h>

/********
 * MACROS
 ********/
/*! \def  MAXSIZE
    \brief Maximum size of the stack
*/

#define MAXSIZE 5

/******************************************************************************
 *                      Structure Definition
 *****************************************************************************/
/*! \typedef stack STACK
    \brief A type definition of stack
*/
/*! \struct stack
	\brief Stack structure
*/
struct stack
{
	/*! \var stk[MAXSIZE];;
		\brief integer stk array of maximum size
	*/
	int stk[MAXSIZE];
	/*! \var top
		\brief top of the stack
	*/
	int top;
};

typedef struct stack STACK;
STACK s; //Structure variable

/*********************
 * Function Prototypes
 *********************/
void push(void);
int  pop(void);
void display(void);

/** Function    main
 * @date        FEB/13/2018
 * @brief       Main function of the program.
 * @param       None
 * @return      None
 */
void main ()
{
	int choice; //choice entered by user
	int option = 1; //option to continue or exit
	s.top = -1; //By default value of the stack

	printf ("STACK OPERATION\n");
	//loop through option
	while (option)
	{
		printf ("------------------------------------------\n");
		printf ("      1    -->    PUSH               \n");
		printf ("      2    -->    POP               \n");
		printf ("      3    -->    DISPLAY               \n");
		printf ("      4    -->    EXIT           \n");
		printf ("------------------------------------------\n");

		printf ("Enter your choice\n");
		scanf  ("%d", &choice);
		
		//Identify user's choice
		switch (choice)
		{
			case 1:
				push();
				break;

			case 2:
				pop();
				break;

			case 3:
				display();
				break;

			case 4:
				return;
		}
		printf ("Type 0 for exit or 1 continue?\n");
		scanf ("%d", &option);
    	}

} //End of main


/** Function    push
 * @date        FEB/13/2018
 * @brief       Function to add an element to the stack
 * @param       None
 * @return      None
 */
void push ()
{
	int num; //The number entered by user in stack
	if (s.top == (MAXSIZE - 1))
	{
		printf ("Stack is Full\n");
		return;
	}

	else
	{
		printf ("Enter the element to be pushed\n");
		scanf ("%d", &num);
		s.top = s.top + 1;
		s.stk[s.top] = num;
	}
} //End of push


/** Function    pop
 * @date        FEB/13/2018
 * @brief       Function to delete an element from the stack
 * @param       None
 * @return      int: the result of execution.
 *		        0: success
 *		        -ve: on various failures.
 */
int pop ()
{
	int num; //The number entered by user in stack
	if (s.top == - 1)
	{
		printf ("Stack is Empty\n");
		return (s.top);
	}

	else
	{
		num = s.stk[s.top];
		printf ("poped element is = %d\n", s.stk[s.top]);
		s.top = s.top - 1;
	}

	return(num);
} //End of pop


/** Function    display
 * @date        FEB/13/2018
 * @brief       Function to display the elements of the stack
 * @param       None
 * @return      None
 */
void display ()
{
	int i; //iteration through i for displaying the elements of the stack
	if (s.top == -1)
	{
		printf ("Stack is empty\n");
		return;
	}
	else
	{
		printf ("\n The status of the stack is \n");
		for (i = s.top; i >= 0; i--)
		{
			printf ("%d\n", s.stk[i]);
		}
	}

	printf ("\n");
} //End of display
