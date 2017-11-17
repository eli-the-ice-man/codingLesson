//Our first C program
//this is a comment
/*
this is also a comment
see how it spans multiple line
the comment goes
until 
the
end.
*/
#include <stdio.h> /*#include:  this is used to include a library 
		    *<>: These let the compiler know that you're using a standard library
		    *Later "": we can include our own library with quotation marks
		    *stdio.h: Standard input output library ---we need this for printf();
		    */

int main(void){/*This is the main function
		*int: this means that we will return an integer(we'll talk about this later)
		*main: this tells it the main function.
		*void: this tells that the main function has no arguments.
		*/
	printf("Hello World! :)\n");/* This is also a funtion
				     * printif: is the name of the function 
				     * "Hello World! :)/n": The function argument
					 -- don't forget ""!!!!!!!!!!!!
				     * ; after literally everything
				     */
	return 0;//end of main. return 0; says that the program ended corrected.
}
