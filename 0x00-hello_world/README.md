The ALX SE Hello World project is the first project in the world of C programming language.

0. Preprocessor: Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c:

	#!/bin/bash
	gcc -E $CFILE > c

1. Compiler : Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.:

	#!/bin/bash
	gcc -c $CFILE > ${CFILE%.c}.o

2. Assembler : Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c. : 

	#!/bin/bash
	gcc -S $CFILE > ${CFILE%.c}.s


3. Write a script that compiles a C file and creates an executable named cisfun.

	#!/bin/bash
	gcc $CFILE > cisfun


4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line ( by using **puts**):

	#include <stdio.h>

	int main() {
  	puts("Programming is like building a multilingual puzzle");
	  return 0;
	}



