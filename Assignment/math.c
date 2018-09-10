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
#include <math.h>

int main(void) {
    int num1; //First number
    int num2; //Second number
    char Operation; //Operation to be performed
    int sum;
	printf("Please input first number \n"); //Print to console this text
	scanf("%d , &num1"); //'scan for', "%d" means the value will be a integer, &num1 means store the value in integer num1

	printf("Please input the operation \n");
	scanf("%c , &Operation"); //'scan for', "%c" means the value will be a character, &Operation means store the value in integer Operation

	printf("Please input second number \n");
	scanf("%d , &num2"); //'scan for', "%d" means the value will be a integer, &num2 means store the value in integer num2

	printf("%d %c %d = \n",num1 , Operation, num2); //Print a integer then a character then an integer, the first int will be num1 the second will be Operation and the third will be num2
	sum = math(num1,num2,Operation);
	printf("%d \n", sum );

	/*Not sure if you can do this or not
	 * printf("%d\n", math(num1,num2,Operation) //print the returned value (That is an integer) of the math function when it is passed the values of num1, num2, and Operation
	 */
}


int math( int num1, int num2, char Operation ) { //Function takes two integers and a character that will be the operator


    switch(Operation) {
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
          case '%' : //Modulus
              return num1 % num2;
              break;
          case '<' ://bit shift left by the amount specified by 'num2'
              return num1 << num2;
              break
          case '>' :
              return num1 >> num2;
              break;
          default :
             printf("Invalid operation given \n" );
             return NULL;
             break
       }
}
