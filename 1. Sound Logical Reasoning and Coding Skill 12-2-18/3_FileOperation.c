/*
Program Definition: File open, read, write and close operation copying file1.txt data into file2.txt
*/


/******************************************************************************
 *
 * @file    3_FileOperation.c
 * @author  Mukesh Prajapati
 * @brief   This file demonstrates copying one file contents to another file.
 * @date
 *          FEB/13/2018,Created
 *****************************************************************************/

/******************************************************************************
The program works in following manner:

File1.txt is read from the system, If the file pointer is NULL then error message is displayed.

File2.txt is opened in write mode for writing the contents of the file1.txt, If the file pointer is NULL then error message is displayed.

******************************************************************************/

/***************
 * Include Files
 ***************/

#include <stdio.h>

/** Function    main
 * @date        FEB/13/2018
 * @brief       Main function of the program.
 * @param       None
 * @return      int: the result of execution.
 *		        0: success
 *		        -ve: on various failures.
 */
int main()
{
	char ch; //For reading the contents of the file

	/* Pointer for both the file*/
	FILE *fpr, *fpw; /**
			  * \var fpr 
				\brief File pointer read
			    \var fwr
				\brief File pointer write
			  */

	/* Opening file file1.txt in “r” mode for reading */
	fpr = fopen("file1.txt", "r");

	/* Ensure file1.txt opened successfully*/
	if (fpr == NULL)
	{
		puts("Input file cannot be opened");
	}

	/* Opening file file2.txt in “w” mode for writing*/
	fpw= fopen("file2.txt", "w");

	/* Ensure file2.txt opened successfully*/
	if (fpw == NULL)
	{
	puts("Output file cannot be opened");
	}

	/*Read & Write Logic*/
	while(1)
	{
		ch = fgetc(fpr);
		if (ch==EOF)
		break;
		else
		fputc(ch, fpw);
	}

	/* Closing both the files */
	fclose(fpr);
	fclose(fpw);

	return 0;
} //End of main
