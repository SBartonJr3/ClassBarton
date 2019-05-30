#include <Windows.h>
#include <stdio.h>
#include "TestCode.h"

/////////////////////////////////////////////////////////////
// Test 1: For this task, you will receive two pointers to NULL terminated strings: 
//		   a 'sentence', and a 'word'. The objective will be to delete (in place) the first 
//		   occurrence of 'word' in the sentence. 
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
//		- the provided 'word' is not part of 'sentence': should return ERROR_NOT_FOUND (1168)
/////////////////////////////////////////////////////////////

int deleteWord(char* sentence, char* word)
{
	int status = ERROR_SUCCESS; // May want to replace this at some point
	
	//declaring variables to use
	int len, removeWord;

	len = sizeof(sentence);
	removeWord = sizeof(word);

	//if sentence is MIA, return error
	if (!sentence)
	{
		return ERROR_INVALID_PARAMETER;
	}
	//if word is MIA, return error
	else if (!word)
	{
		return ERROR_INVALID_PARAMETER;
	}
	else if (!strstr(sentence, word))
	{
		return ERROR_NOT_FOUND;
	}
	else
	{
		char *buffer = malloc(strlen(sentence) + 1);
		char *mark_position = strstr(sentence, word);
		strcpy(buffer, mark_position + removeWord);
		memmove(mark_position, buffer, strlen(buffer) + 10);
		return status;
	}
}


/////////////////////////////////////////////////////////////
// Test 3 (part one): This task will involve allocating a buffer
//				of (sizeOfData) bytes, and reading up to that amount
//				into it from the file specified in 'filename'. Additionally,
//				the data in the file has been pseudo-encryped (poorly) with a single-
//				byte XOR, which you will be required to undo (the byte that the buffer
//				was XOR'd against will be provided in 'key'). Finally, assuming the task
//				was successful, (and all pointers are valid) the pointer to the resulting 
//				buffer should be stored in the area referenced by buffPtr.
//
// Expected Return Values:
//			- task was completed successfully: ERROR_SUCCESS (0)
//			- bad input was provided: ERROR_INVALID_PARAMETER (87)
//			- you were unable to allocate enough memory: ERROR_OUTOFMEMORY (14)
//			- you were unable to open the file: ERROR_OPEN_FAILED (110)
/////////////////////////////////////////////////////////////
int decodeFromFile(char* filename, unsigned int sizeOfData, unsigned char key, void** buffPtr)

{
	int status = ERROR_SUCCESS; // May want to replace this at some point
	FILE *fptr;

	//if inputs are invalid, return error
	if (!filename || !sizeOfData || !key || !buffPtr)
	{
		return ERROR_INVALID_PARAMETER;
	}
	else
	{
		//opens filename in read mode
		fptr = fopen(filename, "r");

		//if fptr is NULL, return error
		if (fptr == NULL)
		{
			return ERROR_OPEN_FAILED;
		}
		else
		{
			//set buffer size to sizeOfData
			char *buffer = malloc(sizeOfData);

			//if buffer is NULL, close file and return error
			if (buffer == NULL)
			{
				fclose(fptr);
				return ERROR_OUTOFMEMORY;
			}
			else
			{
				for (unsigned int i = 0; i < sizeOfData; i++)
				{
					//setting chariZard to a character in fptr
					char chariZard = fgetc(fptr);
					//decrypt the character with key
					chariZard = chariZard ^ key;
					//
					buffer[i] = chariZard;
				}
			}
			fclose(fptr);
			*buffPtr = buffer;
			return status;
		}
	}
}



/////////////////////////////////////////////////////////////
// Test 3 (part two): The second part of the task; this simply requires you
//				  to appropriately free the buffer allocated in the last task
//				  (if possible).
//
// Expected Return Values:
//			- the task completed successfully: TRUE
//			- the task failed/bad input: FALSE
/////////////////////////////////////////////////////////////
BOOL freeDecodedBuffer(void* buffer)
{
	BOOL out = FALSE; // May want to replace this at some point

	//code
	//if buffer is not there, return FALSE
	if (!buffer)
	{
		return out;
	}
	//if buffer is there, free the buffer and return TRUE
	else
	{
		free(buffer);
		return TRUE;
	}

}
