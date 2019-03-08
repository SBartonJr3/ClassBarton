#include <stdio.h>
#include <stdlib.h>

int main( void )
{ 
  //variable declaration
   char username[30];
   char first[30];
   char middle[30];
   char last[30];
  
   FILE *crPtr; // crPtr = student.dat file pointer   

   // fopen opens file. Exit program if unable to create file 
   if ( ( crPtr = fopen( "/home/student/Desktop/CProgramming/Chapter 12/ClassRoster", "w" ) ) == NULL ) 
   {
      puts( "File could not be opened" ); // Error checking
   } 
   else 
   { 
      puts( "Enter the student's First, Middle, Last Name ." );  //first, middle, and last name for each student.
      puts ("Enter your username");  // user name for student 
      puts( "Enter EOF to end input." );
      printf( "%s", "* " );  
      scanf( "%29 %29 %29 %29", first, middle, last, username);  //scan the different variables
   
      // writes students info into crPtr
      while ( !feof( stdin ) )    
      { 
        fprintf(crPtr, "%s %s %s has a username of %29\n", first, middle, last, username);  
        printf( "%s", "* " );
        scanf( "%29s%29%29%29", first, middle, last, username);
      } 
      fclose(crPtr);   //closes
   } 
} 