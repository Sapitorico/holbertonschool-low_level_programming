<div ><h1 align="center"C> - Hello, World</h1>
<h2>introduction in c</h2>
</div>

---

<details><summary><h3>What is C?</h3></summary>
C is an imperative (procedural) language, all the code has to be inside a function, the C files are the source code of your program (line of texot with the steps that the computer must follow to execute a loader), the C files must be compiled to create an executable file.
- is a language very close to h
hardware 
# gcc compilation process\

![image text](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/images/GCC_CompilationProcess.png)
* Preprocessor: expands macros (code fragments of a program that are replaced by the macro value - name), removes comments, leaves the source code.
* Compiler: translates them into assembly code, and writes the instructions.
* Assembler: binary code - links libraries (adds function statements from libraries).

### Comments 
/*comment*/
/**
  * multi
  * line
  * comment
  */
</details>

<details>
    <summary><h3>Variables</h3></summary>

**Data types | Integer types (on most 64bits computers)**
| Type  | Storage size  | Value range  |
| ------------ | ------------ | ------------ |
| char  | 1 byte  |  -128 to 127 |
| unsigned char  | 1 byte  | 0 to 255  |
| short  | 2 bytes  | -32,768 to 32,767  |
| unsigned short  | 2 bytes  | 0 to 65,535  |
| int  | 4 bytes  | -2,147,483,648 to 2,147,483,647  |
| unsigned int   |  4 bytes | 0 to 4,294,967,295  |
| long  | 8 bytes  | −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807  |
|  unsigned long | 8 bytes   | 0 to 18,446,744,073,709,551,615  |

</details>

---

<details>
<summary><h2>Tasks</h2></summary>

### general main
cat main.c
```c
#include <stdio.h> (standard library - code blocks of used functions)

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
```
### 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE
The output should be saved in the file c

option is used for preprocessing only: **-E** 
### 1. Compiler
Write a script that compiles a C file but does not link.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o
The **-c** option in the command means compile (but not link).
### 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
**-S** It will perform the initial compilation and then stop before the assembler is executed.
### 3. Name
Write a script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE
**-o** (places standard output in a file) Compile and create an executable file
### 4. Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0
* man put
https://mywiki-wooledge-org.translate.goog/BashGuide/SpecialCharacters?_x_tr_sch=http&_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=wapp
### 5. Hello, printf
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option
* man printf
### 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option
- printf prints results with a format, allows printing variables and is a variadic function since it accepts several parameters. 
- %zu print the value of a variable size_t
- sizeof The function receives as a single parameter either the name of a variable, or the name of a data type, and returns its size in bytes, reserving an exact amount of memory. 

</details>

---

<details>
<summary><h2>Advanced</h2></summary>

### 7. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
**-masm** Select the (dis)assembly dialect.
**intel** The x86 assembly language is the family of assembly languages for the x86 family of processors introduced in April 1972, which includes Intel's 8086 and 8088 processors, Intel's Pentium and AMD's Athlon processors, and the latest x86 processors from these companies.
### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option
* man write
**syntax**
`write(output or input, "str", string bytes);`

<details>