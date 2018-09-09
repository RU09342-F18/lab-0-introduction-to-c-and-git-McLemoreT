/*
 ============================================================================
 Name        : math.c
 Author      : Tyler McLemore
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}


int math( int num1, int num2, char Operator ) { //Function takes two integers and a character that will be the operator


    switch(Operator) {
          case '+' : //Addition
             return num1 + num2;
             break;
          case '-' : //Subtraction
             return num1 - num2;
             break;
          case '/' :
             return num1 / num2;
             break;
          case '*' : //Multiplication
          case 'x' : //Just in case the user uses different symbols for multiplication
          case 'X' :
             return num1 * num2;
             break;
          default :
             printf("Invalid operation given" );
             return NULL;
             break
       }
}
