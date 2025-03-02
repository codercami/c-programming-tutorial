/*
    Functions
A function is a block of code that performs a specific task.

Suppose, you need to create a program to open a folder and
delete files inside the folder, you can create three functions;
1. A function to create the folder
2. A function to open the folder
3. A function to delete the files

With this example, we can say that the collection of
functions creates a program.

    Why should we use functions
1. With functions, we wont have to write same code or logic
    over and over again in a program.
2. We can easily track the program, when we use functions.
3. We can call functions multiple times in a program, and so
    it is reuseable.

    Types of Function
1. Library Function - These are the built in functions in the
    header files, e.g printf, scanf.

2. User-defined Function - These are the functions created by the
    user.


    Creating a Function
There are three things to consider when creating c function;

1. Function declaration - A function must be declared globally
in a c program to tell the compiler about the function name,
function parameters, and return type.
syntax
returntype functionName(arg1, arg2);

2. Function call - Function can be called from anywhere in
the program. The parameter list must not differ in function
calling and function declaration. We must pass the same
number of arguments as it is declared in the function
declaration.
syntax
functionName(arg1, arg2);

3. Function definition - It contains the actual statements
which are to be executed. It is the most important aspect
to which the control comes when the function is called.
Here, we must notice that only one value can be returned
from the function.
Syntax
returnType functionName(arg1, arg2)
{
    body of the function;
}

Passing arguments to a function
In programming, argument refers to the variable passed to
the function.
In the above examples; arg1 and arg2 are the arguments passed
into the function.

NOTE: Type of arguments and the number of arguments passed
during a function call, must match that of the function
definition.
Example, if arg1 is of int type, then during the call, the
argument to replace arg1 must be of int type.
*/

