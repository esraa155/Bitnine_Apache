Development Environment and Compilation Instructions
To compile and run the provided source code, you will need a C compiler installed on your system. Here are the instructions for compiling and running the code:

Development Environment
To work with the source code, you can use any text editor or integrated development environment (IDE) that supports C programming. Some popular choices include:

Visual Studio Code
Xcode (for macOS)
Code::Blocks
Dev-C++
Eclipse CDT
Compilation Steps
Once you have set up your development environment, follow these steps to compile and run the code:

Create a new source code file with a .c extension, e.g., QuestionNo1.c.
Copy the provided source code into the main.c file.
Save the file.
Compilation using GCC (GNU Compiler Collection)
If you have GCC installed on your system, you can compile the code using the following steps:

Open a terminal or command prompt.

Navigate to the directory where you saved the QuestionNo1.c file using the cd command.

Run the following command to compile the code:


**gcc -o program QuestionNo1.c**



This command will generate an executable file named program (or program.exe on Windows) in the same directory.

Compilation using Other Compilers
If you are using a different C compiler, refer to its documentation on how to compile C code from the command line or within the IDE.

Running the Code
After successful compilation, follow these steps to run the code:

In the terminal or command prompt, make sure you are still in the directory containing the compiled executable (program or program.exe).

Run the following command to execute the program:


**./program**


On Windows, the command is program.exe.

The program will run, and you will see the output printed on the console.

Note: The provided code calculates and prints the result of various operations. If you want to modify the code or check different values, you can make changes in the main function before compiling.

Remember to free any dynamically allocated memory using the free function to avoid memory leaks.

That's it! You should now be able to compile and run the provided source code successfully.
