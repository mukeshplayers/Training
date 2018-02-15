/*
Program Definition: Merging two files into a single file.
Name: Mukesh Prajapati
Date: 13-02-2018
*/


/******************************************************************************
 *
 * @file    4_FileMerging.c
 * @author  Mukesh Prajapati
 * @brief   This file demonstrates merging two file contents into one file.
 * @date
 *          FEB/13/2018,Created
 *****************************************************************************/
/******************************************************************************
The program works in following manner:

Two files(file1.txt. file2.txt) are opened in read mode and third file(file3.txt) opened in write mode. If any of them is NULL then error message is displayed. 

File1.txt and File2.txt contents are merged into file3.txt
*/


/***************
 * Include Files
 ***************/
#include <stdio.h>
#include <stdlib.h>


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
	//Open two files to be merged
	FILE *fp1 = fopen("file1.txt", "r"); //file pointer fp1
	FILE *fp2 = fopen("file2.txt", "r"); //file pointer fp2

	//Open file to store the result
	FILE *fp3 = fopen("file3.txt", "w"); //file pointer fp3
	char c; //character c to read contents

	/*checking wheather the file is NULL */
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		puts("Could not open files");
		exit(0);
	}

	//Copy contents of first file to file3.txt
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp3);
	}

	//Copy contents of second file to file3.txt
	while ((c = fgetc(fp2)) != EOF)
	{
		fputc(c, fp3);
	}
	
	printf("Merged file1.txt and file2.txt into file3.txt");
	//closing file pointers
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;
} //End of main
