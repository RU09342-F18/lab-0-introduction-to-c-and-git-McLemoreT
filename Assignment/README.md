+--------------------------------+
|                                |
|	General Use			line: 15 |
|		Operations		line: 18 |
|                                |
|	math.c/main			line: 33 |
|		num1			line: 36 |
|		num2			line: 38 |
|		Operation		line: 39 |
|                                |
|	math.c/math			line: 40 |
|		switch			line: 41 |
|                                |
+--------------------------------+
General Use:
	The program will prompt the user to input their first number that they wish to compute. The user will then type an integer into their console. An integer is any whole number (Meaning no decimal values or fractions) that ranges
		from -2,147,483,648 to 2,147,483,647. The value given should not include commas. The value given should not include any non-numeric value. The second value the program will ask for is the operation that the user wants to preformon their first number. The symbols that can be used are shown in the table.
				+----------------+-------------------+
				|                |        Symbol     |
				+----------------+-------------------+
				| addition       |         '+'       |
				+----------------+-------------------+
				| subtraction    |         '-'       |
				+----------------+-------------------+
				| multiplication | '*' or 'x' or 'X' |
				+----------------+-------------------+
				| Division       |         '/'       |
				+----------------+-------------------+
	The next thing the program asks for is the second number. Like with the first, the value must be an integer that follows the same rules as the first.
		Once all values have been given, the program will output the full equation that it will compute and then output the answer on the next line. After the answer has been given the [rpgram will reset to the original state and
		ask for a new number.
				
math.c/main:
	'main''s purpose like all main functions is a launch point for the program. In this case main gathers the numbers and function that the user wants to compute, and then passes them to 'math'.
		'main' contains three variables in it. 'num1', 'num2' and 'Operation'. 
	'num1' is used to store the first number that the Operation will be applied to. 'num1' is an integer meaning that it must be a whole number with no decimals
		or fractions in it. It is also bound by the numbers between -2,147,483,648 and 2,147,483,647. 
	'num2' like 'num1' must be an integer and is bound by the same constraints. It is the second part of the function and is the number that will be applied to 'num1' through the operation 'Operation'.
	'Operation' is a the function that will be applied to 'num1' using 'num2'. 'Operation' must be a character, meaning that it must be only one ASCII character. anything longer than one character will not work in this program.
math.c/math
	The 'math' function is completely comprised of a switch statement that handles the actual math of the calculator. This function decides what operation needs to be preformed by testing the 'Operation' varible. The function
		compares 'Operation' to a series of other known symbols. If a match is found it preforms the known operation and returns the answer to 'main'. If no match is found, an error message is printed to console and a NULL value
		is returned instead.
	
By: Tyler McLemore