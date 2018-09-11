+-------------------------------------+
|                                     |
| General Use				line:  29 |
|	Operations				line:  34 |
|                                     |
| math.c/main				line:  66 |
|	num1					line:  72 |
|	num2					line:  75 |
|	Operation				line:  78 |
|                                     |
| math.c/math				line:  81 |
|	switch					line:  82 |
|   Functions				Line:  87 |
|		ADDITION			Line:  88 |
|		SUBTRACTION			Line:  93 |
|		MULTIPLICATION		Line:  98 |
|		DIVISION			Line: 102 |
|		MODULUS				Line: 105 |
|		LEFT SHIFT			Line: 109 |
|		RIGHT SHIFT			Line: 111 |
|		BITWISE AND			Line: 114 |
|		BITWISE OR			Line: 116 |
|		BITWISE XOR			Line: 118 |
|		BITWISE NOT			Line: 120 |
|                                     |
+-------------------------------------+


General Use:
	The program will prompt the user to input their first number that they wish to compute. The user will then type an integer into their console. An integer 
		is any whole number (Meaning no decimal values or fractions) that ranges from -2,147,483,648 to 2,147,483,647. The value given should not include 
		commas. The value given should not include any non-numeric value. The second value the program will ask for is the operation that the user wants to 
		preform on their first number. The symbols that can be used are shown in the table.
				+----------------+-------------------+
				|    Operation   |       Symbol      |
				+----------------+-------------------+
				| addition       |         '+'       |
				+----------------+-------------------+
				| subtraction    |         '-'       |
				+----------------+-------------------+
				| multiplication | '*' or 'x' or 'X' |
				+----------------+-------------------+
				| Division       |         '/'       |
				+----------------+-------------------+
				| Modulus        |         '%'       |
				+----------------+-------------------+
				| Left Shift     |         '<'       |
				+----------------+-------------------+
				| Right Shift    |         '>'       |
				+----------------+-------------------+
				| Bitwise AND    |         '&'       |
				+----------------+-------------------+
				| Bitwise OR     |         '|'       |
				+----------------+-------------------+
				| Bitwise XOR    |         '^'       |
				+----------------+-------------------+
				| Bitwise INVERSE|         '~'       |
				+----------------+-------------------+
				
				
	The next thing the program asks for is the second number. Like with the first, the value must be an integer that follows the same rules as the first.
		Once all values have been given, the program will output the full equation that it will compute and then output the answer on the next line. After 
			the answer has been given the program will reset to the original state and
			ask for a new number.
				
math.c/main:
	main's purpose like all main functions is a launch point for the program. In this case main gathers the numbers and function that the user wants to 
		compute, and then passes them to 'math'.
		
	'main' contains three variables in it. 'num1', 'num2' and 'Operation'. 
	
	'num1' is used to store the first number that the Operation will be applied to. 'num1' is an integer meaning that it must be a whole number with no decimals
		or fractions in it. It is also bound by the numbers between -2,147,483,648 and 2,147,483,647. 
		
	'num2' like 'num1' must be an integer and is bound by the same constraints. It is the second part of the function and is the number that will be applied to 
		'num1' through the operation 'Operation'.
		
	'Operation' is a the function that will be applied to 'num1' using 'num2'. 'Operation' must be a character, meaning that it must be only one ASCII character. 
		anything longer than one character will not work in this program.
		
math.c/math
	The 'math' function is completely comprised of a switch statement that handles the actual math of the calculator. This function decides what operation needs 
		to be preformed by testing the 'Operation' varible. The function compares 'Operation' to a series of other known symbols. If a match is found it 
		preforms the known operation and returns the answer to 'main'. If no match is found, an error message is printed to console and a NULL value is returned 
		instead.
		
	Functions:
		ADDITION '+': Used to add two number together from each other. Both numbers will be represented using integers meaning that they can not be fractions or 
			have decimal places. They must also be between -2,147,483,648 and 2,147,483,647. The sum of both numbers should not exceed 2,147,483,647 or else the 
			calculator will over flow. The sum should also not be less than -2,147,483,648 (in the case that both numbers are negative) or the result will 
			underflow.
		
		SUBTRACTION '-': Used to subtract two numbers from each other. Both numbers will be represented using integers meaning that they can not be fractions 
			or have decimal places. They must also be between -2,147,483,648 and 2,147,483,647. The result of the subtraction should not be less than 
			-2,147,483,648 or the result will underflow. The result should also not be greater than 2,147,483,647 (in the case that both numbers are negative) 
			or else the result will overflow.
			
		MULTIPLICATION '*' 'x' 'X': Used to multiply two numbers together. Both numbers will be represented using integers meaning that they can not be fractions 
			or have decimal places. They must also be between -2,147,483,648 and 2,147,483,647. The product of both numbers should not exceed 2,147,483,647 
			or else the result will overflow. If one number is negative, also be careful that the result is not less than -2,147,483,648, or else the result 
			will underflow.
		DIVISION '/' '\': Used to divide one number from another. Both numbers will be represented using integers meaning that they can not be fractions 
			or have decimal places. They must also be between -2,147,483,648 and 2,147,483,647. Do not set num2 equal to 0, as this will result in a divide
			by zero error. In the case that the dividend of the two numbers does not result in a whole umber the result will be rounded toward zero.
		MODULUS '%': Used to show the remainder when two numbers are divided. Both numbers will be represented using integers meaning that they can not be 
			fractions or have decimal places. They must also be between -2,147,483,648 and 2,147,483,647. When two numbers divide perfectly into each other 
			the result will be zero. When two numbers do not divide into each other cleanly, the result will show what the remainder of that division would 
			be.
		LEFT SHIFT '<': Used to shift the bits making up num1 over by the amount of num2 in the left direction. Bits that are shifted out are not stored 
			and do not loop back around Any blanks that need to be filled due to shifting bits out will always be filled by zeros. 
		RIGHT SHIFT '>': Used to shift the bits making up num1 by the amount num2 in the right direction. Bits that are shifted out are not stored and do
			not loop back around. If blanks are generated by shifting out bits, the blanks will be filled by the sign of the number. Meaning positive 
			numbers will fill blanks with zeros and negative numbers will fill blanks with ones.
		BITWISE AND '&': USed to preform a bitwise AND operation on the bits making up num1 and num2. This operation will match up the bits that make 
			up both variables and will store a one when both numbers have a "1" stored and a zero in all other cases.
		BITWISE OR '|': Preforms a bitwise OR operation on the bits that make up num1 and num2. This operation compares the bits of both variables and
			if either one has a "1" in each slot, the program will make the result have a "1" in that slot as well.
		BITWISE XOR '^' Preforms a bitwise EXCLUSIVE OR operation on num1 and num2. This operation compares the bits of both variables and if one has a
			"1" and the other has a "0" then the program stores a "1" for that slot. In all other cases a "0" will be stored.
		BITWISE NOT '~': Preforms a NOT operation on num1. num2 is not used for this function. The program will take the bits that make up num1 and
			flip each bit to the opposite pole. Turns all slots that have a "1" into a "0" and all slots that have a "0" into a "1"
		
	
By: Tyler McLemore
