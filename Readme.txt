***Project On Calculator using Reverse Polish Notation Using C Language.


	->  Reverse Polish Notation is a way of expressing arithmetic expressions that avoids the use of brackets to define priorities for evaluation of operators.


	->  To evaluate a postfix (RPN) expression, let's use a stack. Recall that a stack is a LIFO data structure.The method is follows, evaluating the expression from left to right:

		*When you encounter an operand, push it onto the stack.
		*When you encounter an operator, pop two values from the stack and push the result back onto the stack.
		*When you have finished (been through the whole expression), pop the final answer from the stack.


	-> In this notation the above expression would be

			3 5 + 7 2 – *

		Reading from left to right, this is interpreted as follows:

		- Push 3 onto the stack.
		- Push 5 onto the stack. Reading from the top, the stack now contains (5, 3).
		- Apply the + operation: take the top two numbers off the stack, add them together, and put the result back on the stack. The stack now contains just the number 8.
		- Push 7 onto the stack.
		- Push 2 onto the stack. It now contains (2, 7, 8).
 		- Apply the – operation: take the top two numbers off the stack, subtract the top one from the one below, and put the result back on the stack. The stack now contains (5, 8).
		- Apply the * operation: take the top two numbers off the stack, multiply them together, and put the result back on the stack. The stack now contains just the number 40.


	***Installation Process:

		1.Command          :First using the Shell Command Line in Terminal, tunnel to the project folder via “cd” (change directory) command.

		2.Using Vim Editor : write command “vim filename.c”. Enter “I” to insert anything in vim editor .
				     Enter “Esc” Enter “:” write “wq” ,Enter.

		3.Using Compiler   : For c code write “gcc filename.c -o filename ” , Enter After compiling a runnable file will be created .

		4.Run              : write “./filename” , Enter.
		5. Input           : Insert your input.



	

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


							Name		: Md. Borhan Uddin Rafi
							Session 	: 2017-2018
							University	: Begum Rokeya University,Rangpur.


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
