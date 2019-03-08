/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// This is an awesome function and useful if you need to clear the input buffer
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(void)
{
	int i = 0;
	int numberFibonacciNumbers = 0;
	int fibNumMinus2 = 0;
	int fibNumMinus1 = 1;
	int currentFibNum = 0;

	printf("How many Fibonacci numbers would you like to print? \n");
	scanf("%d", &numberFibonacciNumbers);
    clean_stdin();

	printf("******************\n");
	printf("FIBONACCI SEQUENCE\n");
	printf("******************\n");

	for (i = 0; i < numberFibonacciNumbers; i++)
	{
        // Check if we are on first or second itteration, if so... print statics. 
        if (i == 0)
        {
            printf("%d\n", fibNumMinus2);
            continue;
        }
        else if (i == 1)
        {
            printf("%d\n", fibNumMinus1);
            continue;
        }
        // If not, calcuate next fib number
        else
        {
            currentFibNum = fibNumMinus1 + fibNumMinus2;
            printf("%d\n", currentFibNum);
            fibNumMinus2 = fibNumMinus1;
            fibNumMinus1 = currentFibNum;
        }
	}

	getchar(); getchar();
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <errno.h>

#ifndef ASSERR
#define ASSERR
#endif

int fibonacci_number(int sequenceNumber);
void error_reporting(int currentErrno);
void clean_stdin(void);

int main(void)
{
	int i = 0;
	int numberFibonacciNumbers = 0;
	int currentFibNum = 0;
	int currentErr = 0;

	printf("How many Fibonacci numbers would you like to print? \n");
	scanf("%d", &numberFibonacciNumbers);
    clean_stdin();
	currentErr = errno; 
	if (currentErr != 0)
	{
		error_reporting(currentErr);
	}
#ifdef
#define MAXIMUM_SEQ_NUM (2300)
#define ERROR_VALUE (105)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
 * This pre-processing directive determines whether the program will
 *     run unit tests and/or prompt the user for input depending on
 *     what #define statements are uncommented.
#define MANUAL_TEST // Allows the programmer to manually provide input to test the response of the program as a whole
#define AUTO_TEST // Runs unit tests on unsigned long shadow_sequence_number(int placeNumber)
 * Uncomment out multiple #defines to multiple tests in a single run
 */
#define MANUAL_TEST
//#define AUTO_TEST

void clean_stdin(void);
unsigned long shadow_sequence_number(int placeNumber);

int main(void)
{
	unsigned long tempValue = 0;
	unsigned long myTempValue = 0;
	int i = 0;
	int j = 0;

#ifdef MANUAL_TEST
	int howManyToCalculate = 0;
	tempValue = 0;

	printf("How many numbers would you like to calculate?\n");
	clean_stdin();
	scanf("%d", &howManyToCalculate);
	putchar(10);

	for (i = 1; i <= howManyToCalculate; i++)
	{
		tempValue = shadow_sequence_number(i);
		printf("%d:\t%lu \n", i, tempValue);
	}
#endif

#ifdef AUTO_TEST

#define BUFF_SIZE 24
	tempValue = 0;
	int numberOfTestsRun = 0;
	int numberOfTestsPassed = 0;
	int placeNumbers[BUFF_SIZE] = { -31337, ((MAXIMUM_SEQ_NUM + 1) * -1), (MAXIMUM_SEQ_NUM * -1), -1337, -100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 100, 1337, MAXIMUM_SEQ_NUM, (MAXIMUM_SEQ_NUM + 1), 31337 };
	unsigned long returnValues[BUFF_SIZE] = { ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, 9, 0, 9, 25, 50, 86, 135, 199, 280, 380, 501, 645, 814, 338345, 797553920, 4058312045, ERROR_VALUE, ERROR_VALUE };

	for (i = 0; i < BUFF_SIZE; i++)
	{
		tempValue = shadow_sequence_number(placeNumbers[i]);
		numberOfTestsRun++;
		if (tempValue == returnValues[i])
		{
			numberOfTestsPassed++;
		}
	}

	printf("\n\nNumber of tests run:\t%d\n", numberOfTestsRun);
	printf("Number of tests passed:\t%d\n", numberOfTestsPassed);
#endif

	return 0;
}

/*
 * FUNCTION:   unsigned long shadow_sequence_number(int placeNumber)
 *
 * ARGUMENTS:  placeNumber represents the individual "Shadow Sequence" position number to calculate
 *
 * RETURNS:	   The value of of the "Shadow Sequence" number at position "placeNumber" [see: S(placeNumber)].
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  (see NOTES: for details)  
 *             ERROR_VALUE (105) if placeNumber is unrealistic or dangerous
 *
 * NOTES:      This function should only be returning a single sequence number from the "Shadow Sequence".
 *             This function should *not* be calculating multiple sequence numbers during a single function call.
 *             Nor should this function be printing any sequence numbers.
 *             However, this function will need to call itself recursively to calculate all of the previous sequence
 *                 numbers in order to calculate the sequence number at position "placeNumber".
 *             Any requirements to calcualte or print multiple numbers in the "Shadow Sequence" should be
 *                 accomplished by the calling function [e.g., main()]
 *             The data type of long was chosen as the return value to increase the available output.
 *             The keyword unsigned was chosen to further maximize the available output since this algorithm
 *                 should not be producing any negative numbers.
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  For example, here are some sample calculations of S(n)
 *                     S(1) = 9.
 *                     S(2) = 0.
 *                     S(3) = S(2) + (3 * 3) ---> S(3) = (0)  + (9) ---> S(3) = 9.
 *                     S(4) = S(3) + (4 * 4) ---> S(4) = (9)  + (16) --> S(4) = 25.
 *                     S(5) = S(4) + (5 * 5) ---> S(5) = (25) + (25) --> S(5) = 50.
 *
 *             The first few "Shadow Sequence" numbers are as follows:
 *                 S(1)		S(2)	S(3)	S(4)	S(5)	S(6)	S(7)	S(8)	S(9)	S(10)
 *                 9		0		9		25		50		86		135		199		280		380
 */

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

unsigned long shadow_sequence_number(int placeNumber)
{
	/* INSERT CODE HERE */

	return 90; // Modify this return statement
}
	as
#define MAXIMUM_SEQ_NUM (2300)
#define ERROR_VALUE (105)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
 * This pre-processing directive determines whether the program will
 *     run unit tests and/or prompt the user for input depending on
 *     what #define statements are uncommented.
#define MANUAL_TEST // Allows the programmer to manually provide input to test the response of the program as a whole
#define AUTO_TEST // Runs unit tests on unsigned long shadow_sequence_number(int placeNumber)
 * Uncomment out multiple #defines to multiple tests in a single run
 */
#define MANUAL_TEST
//#define AUTO_TEST

void clean_stdin(void);
unsigned long shadow_sequence_number(int placeNumber);

int main(void)
{
	unsigned long tempValue = 0;
	unsigned long myTempValue = 0;
	int i = 0;
	int j = 0;

#ifdef MANUAL_TEST
	int howManyToCalculate = 0;
	tempValue = 0;

	printf("How many numbers would you like to calculate?\n");
	clean_stdin();
	scanf("%d", &howManyToCalculate);
	putchar(10);

	for (i = 1; i <= howManyToCalculate; i++)
	{
		tempValue = shadow_sequence_number(i);
		printf("%d:\t%lu \n", i, tempValue);
	}
#endif

#ifdef AUTO_TEST

#define BUFF_SIZE 24
	tempValue = 0;
	int numberOfTestsRun = 0;
	int numberOfTestsPassed = 0;
	int placeNumbers[BUFF_SIZE] = { -31337, ((MAXIMUM_SEQ_NUM + 1) * -1), (MAXIMUM_SEQ_NUM * -1), -1337, -100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 100, 1337, MAXIMUM_SEQ_NUM, (MAXIMUM_SEQ_NUM + 1), 31337 };
	unsigned long returnValues[BUFF_SIZE] = { ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, 9, 0, 9, 25, 50, 86, 135, 199, 280, 380, 501, 645, 814, 338345, 797553920, 4058312045, ERROR_VALUE, ERROR_VALUE };

	for (i = 0; i < BUFF_SIZE; i++)
	{
		tempValue = shadow_sequence_number(placeNumbers[i]);
		numberOfTestsRun++;
		if (tempValue == returnValues[i])
		{
			numberOfTestsPassed++;
		}
	}

	printf("\n\nNumber of tests run:\t%d\n", numberOfTestsRun);
	printf("Number of tests passed:\t%d\n", numberOfTestsPassed);
#endif

	return 0;
}

/*
 * FUNCTION:   unsigned long shadow_sequence_number(int placeNumber)
 *
 * ARGUMENTS:  placeNumber represents the individual "Shadow Sequence" position number to calculate
 *
 * RETURNS:	   The value of of the "Shadow Sequence" number at position "placeNumber" [see: S(placeNumber)].
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  (see NOTES: for details)  
 *             ERROR_VALUE (105) if placeNumber is unrealistic or dangerous
 *
 * NOTES:      This function should only be returning a single sequence number from the "Shadow Sequence".
 *             This function should *not* be calculating multiple sequence numbers during a single function call.
 *             Nor should this function be printing any sequence numbers.
 *             However, this function will need to call itself recursively to calculate all of the previous sequence
 *                 numbers in order to calculate the sequence number at position "placeNumber".
 *             Any requirements to calcualte or print multiple numbers in the "Shadow Sequence" should be
 *                 accomplished by the calling function [e.g., main()]
 *             The data type of long was chosen as the return value to increase the available output.
 *             The keyword unsigned was chosen to further maximize the available output since this algorithm
 *                 should not be producing any negative numbers.
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  For example, here are some sample calculations of S(n)
 *                     S(1) = 9.
 *                     S(2) = 0.
 *                     S(3) = S(2) + (3 * 3) ---> S(3) = (0)  + (9) ---> S(3) = 9.
 *                     S(4) = S(3) + (4 * 4) ---> S(4) = (9)  + (16) --> S(4) = 25.
 *                     S(5) = S(4) + (5 * 5) ---> S(5) = (25) + (25) --> S(5) = 50.
 *
 *             The first few "Shadow Sequence" numbers are as follows:
 *                 S(1)		S(2)	S(3)	S(4)	S(5)	S(6)	S(7)	S(8)	S(9)	S(10)
 *                 9		0		9		25		50		86		135		199		280		380
 */

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

unsigned long shadow_sequence_number(int placeNumber)
{
	/* INSERT CODE HERE */

	return 90; // Modify this return statement
}Numbers > 0);
#endif
#define MAXIMUM_SEQ_NUM (2300)
#define ERROR_VALUE (105)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
 * This pre-processing directive determines whether the program will
 *     run unit tests and/or prompt the user for input depending on
 *     what #define statements are uncommented.
#define MANUAL_TEST // Allows the programmer to manually provide input to test the response of the program as a whole
#define AUTO_TEST // Runs unit tests on unsigned long shadow_sequence_number(int placeNumber)
 * Uncomment out multiple #defines to multiple tests in a single run
 */
#define MANUAL_TEST
//#define AUTO_TEST

void clean_stdin(void);
unsigned long shadow_sequence_number(int placeNumber);

int main(void)
{
	unsigned long tempValue = 0;
	unsigned long myTempValue = 0;
	int i = 0;
	int j = 0;

#ifdef MANUAL_TEST
	int howManyToCalculate = 0;
	tempValue = 0;

	printf("How many numbers would you like to calculate?\n");
	clean_stdin();
	scanf("%d", &howManyToCalculate);
	putchar(10);

	for (i = 1; i <= howManyToCalculate; i++)
	{
		tempValue = shadow_sequence_number(i);
		printf("%d:\t%lu \n", i, tempValue);
	}
#endif

#ifdef AUTO_TEST

#define BUFF_SIZE 24
	tempValue = 0;
	int numberOfTestsRun = 0;
	int numberOfTestsPassed = 0;
	int placeNumbers[BUFF_SIZE] = { -31337, ((MAXIMUM_SEQ_NUM + 1) * -1), (MAXIMUM_SEQ_NUM * -1), -1337, -100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 100, 1337, MAXIMUM_SEQ_NUM, (MAXIMUM_SEQ_NUM + 1), 31337 };
	unsigned long returnValues[BUFF_SIZE] = { ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, 9, 0, 9, 25, 50, 86, 135, 199, 280, 380, 501, 645, 814, 338345, 797553920, 4058312045, ERROR_VALUE, ERROR_VALUE };

	for (i = 0; i < BUFF_SIZE; i++)
	{
		tempValue = shadow_sequence_number(placeNumbers[i]);
		numberOfTestsRun++;
		if (tempValue == returnValues[i])
		{
			numberOfTestsPassed++;
		}
	}

	printf("\n\nNumber of tests run:\t%d\n", numberOfTestsRun);
	printf("Number of tests passed:\t%d\n", numberOfTestsPassed);
#endif

	return 0;
}

/*
 * FUNCTION:   unsigned long shadow_sequence_number(int placeNumber)
 *
 * ARGUMENTS:  placeNumber represents the individual "Shadow Sequence" position number to calculate
 *
 * RETURNS:	   The value of of the "Shadow Sequence" number at position "placeNumber" [see: S(placeNumber)].
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  (see NOTES: for details)  
 *             ERROR_VALUE (105) if placeNumber is unrealistic or dangerous
 *
 * NOTES:      This function should only be returning a single sequence number from the "Shadow Sequence".
 *             This function should *not* be calculating multiple sequence numbers during a single function call.
 *             Nor should this function be printing any sequence numbers.
 *             However, this function will need to call itself recursively to calculate all of the previous sequence
 *                 numbers in order to calculate the sequence number at position "placeNumber".
 *             Any requirements to calcualte or print multiple numbers in the "Shadow Sequence" should be
 *                 accomplished by the calling function [e.g., main()]
 *             The data type of long was chosen as the return value to increase the available output.
 *             The keyword unsigned was chosen to further maximize the available output since this algorithm
 *                 should not be producing any negative numbers.
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  For example, here are some sample calculations of S(n)
 *                     S(1) = 9.
 *                     S(2) = 0.
 *                     S(3) = S(2) + (3 * 3) ---> S(3) = (0)  + (9) ---> S(3) = 9.
 *                     S(4) = S(3) + (4 * 4) ---> S(4) = (9)  + (16) --> S(4) = 25.
 *                     S(5) = S(4) + (5 * 5) ---> S(5) = (25) + (25) --> S(5) = 50.
 *
 *             The first few "Shadow Sequence" numbers are as follows:
 *                 S(1)		S(2)	S(3)	S(4)	S(5)	S(6)	S(7)	S(8)	S(9)	S(10)
 *                 9		0		9		25		50		86		135		199		280		380
 */

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

unsigned long shadow_sequence_number(int placeNumber)
{
	/* INSERT CODE HERE */

	return 90; // Modify this return statement
}

	printf("******************\n");
	printf("FIBONACCI SEQUENCE\n");
	printf("******************\n");
	for (i = 0; i < numberFibonacciNumbers; i++)
	{
		currentFibNum = fibonacci_number(i);
		printf("%d\n", currentFibNum);

	}

	getchar(); getchar();
	return 0;
}

int fibonacci_number(int sequenceNumber)
{
	int returnValue;

	if (sequenceNumber < 0)
	{
		returnValue = -1;
	}
	else if (0 == sequenceNumber)
	{
		returnValue = 0;
	}
	else if (1 == sequenceNumber)
	{
		returnValue = 1;
	}
	else
	{
		returnValue = fibonacci_number(sequenceNumber - 1) + fibonacci_number(sequenceNumber - 2);
	}

	return returnValue;
}

void error_reporting(int currErrno)
{
	if (currErrno)
	{
		perror(strerror(currErrno));
	}

	return;
}

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}