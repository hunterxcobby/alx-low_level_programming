<p align="center">
<a href="https://github.com/hunterxcobby"><img title="hunter" src="https://img.shields.io/badge/github-hunterxcobby-orange.svg?style=social&logo=github"></a>
</p>

#  0x07. C - Even more pointers, arrays and strings

This project serves as a step toward learning the C programming language.

## Table of Contents

- [Project Description](#project-description)
- [Commands](#commands)
- [Tasks](#tasks)
- [Notes](#notes)
- [Installation](#installation)
- [Usage](#usage)
- [Contributions](#contributions)
- [Copyrights](#copyrights)
- [Contact](#contact)
- [My Github Stats](#my-github-stats)

## Project Description 

+ This project was created just as instructed by the author of the program.
+ It contains tasks and quizzes that help assist the C programming language learner.
+ Inside this directory are the various files for the tasks that the learner was asked to come up with.
+ The files here are the programs or solutions to the various tasks respectfully.
+ **NOTE**: *This directly and all of its contents exist for learning purposes.*

## Commands

These are some SHELL commands you need to take note of and understand to familiarise yourself with this project.

**NOTE**: Use the "man <command_name> " in your terminal to better understand how these commands work.

+ touch - to create a file
+ mkdir - to create a directory
+ echo - to provide feedback<br>
       - to display information<br>
       - to generate output within shell scripts<br>
       -to redirect the  output into a file
+ echo $? - to see the return of your code
+ cat - to display the contents of a file
+ tail - to view the last lines of a file
+ export - to set environment variables
+ env - to view the list of the currently defined environment variables
+ chmod u+x - to make a file executable
+ gcc - to compile your program, add the options;<br>
      + -Wall = Enables additional compiler options.<br>
      + -Werror = Treats compiler warnings as errors.<br>
      + -Wextra = Enables extra compiler warnings.<br>
      + -pedantic = Issues warnings for codes that don't meet up to C standards.<br>
      + -std=gnu89 = Indicates that the code should be compiled using the GNU C Compiler's implementation of the C language standard from 1989.<br> 
      Usage :
  - `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`  

## Tasks

### 0. Preprocessor

In this task, I was asked to write a script that runs a C file through the preprocessor and saves the result into another file. The author specified these;
- [x] The C file name will be saved in the variable $CFILE
- [x] The output should be saved in the file c
- File Name: `0-preprocessor`

I made sure to follow the needed requirements and took the time to read through the provided resources before moving on to this task.

**How I Went About With It.**

- Created a file called 0-preprocessor under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the Betty linter to check if my code meets the standard
- Executed it with the './' command. 

### 1. Compiler

In this task, I was to write a script that compiles a C file but does not link. The author specified these;
- [x] The C file name will be saved in the variable $CFILE
- [x] The output file should be named the same as the C file, but with the extension .o instead of .c <br>
- Example: if the C file is main .c, the output file should be main.o
- File Name: `1-compiler`

**How I Went About With It.**

- Created a file called 1-compiler under this directory
- Used the VI text editor to write my script in the file.
- Checked my code with the Betty linter to check if my code meets the standard
- Executed it with the './' command.

### 2. Assembler

in this task, I was asked to write a script that generates the assembly code of a C code and saves it in an output file. The author specified these;

- [x] The C file name will be saved in the variable $CFILE
- [x] The output file should be named the same as the C file, but with the extension .s instead of .c.
       * Example: if the C file is main .c, the output file should be main.s
- File Name: `2-assembler`

**How I Went About With It.**

- Created a file called 2-assembler under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the Betty linter to check if my code meets the standard
- Executed it with the './' command.

### 3. Name

In this task, I was asked to Write a script that compiles a C file and creates an executable named is fun. The author specified these;

- [x] The C file name will be saved in the variable $CFILE
- File Name: `3-name`

**How I Went About With It.**

- Created a file called 3-name under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the Betty linter to check if my code meets the standard
- Executed it with the './' command.

### 4. Hello, puts

In this task, I was asked to write a C program that prints exactly **"Programming is like building a multilingual puzzle**, followed by a new line. The author specified these;

- [x] Use the function that puts
- [x] You are not allowed to use printf
- [x] Your program should end with the value 0
- File Name: `4-puts.c`

**How I Went About With It.**

- Created a file called 4-puts.c under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the betty linter to check if my code meets the standard
- Used gcc '-Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c' to compile it
- Executed the output file with the './' command.

### 5. Hello, printf

In this task, I was asked to write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. The author specified these;

- [x] Use the function printf
- [x] You are not allowed to use the function puts
- [x] Your program should return 0
- [x] Your program should compile without warning when using the -Wall gcc option
- File Name: `5-printf.c`

**How I Went About With It.**

- Created a file called 5-printf.c under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the betty linter to check if my code meets the standard
- Used 'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c' to compile it
- Executed the output file with the './' command.
- Used 'echo $?' to check if the program actually returns 0

### 6. Size is not grandeur, and territory does not make a nation

In this task, I was asked to write C program that prints the size of various types on the computer it is compiled and run on.The author specified these;

- [x] You should produce the exact same output as in the example
- [x] Warnings are allowed
- [x] Your program should return 0
- [ ] You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
- File Name: `6-size.c`

**How I Went About With It.**

- Created a file called 6-size.c under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the betty linter to check if my code meets the standard
- Used 'gcc 6-size.c -m32 -o size32 2> /tmp/32' to compile it
- Used 'gcc 6-size.c -m64 -o size64 2> /tmp/64' to compile it again
- Executed the output file with the './size32' command to check for the datatype sizes for 32-bit operating system
- Executed the output file with the './size64' command to check for the datatype sizes for 64-bit operating system

### 7. Intel

In this task, I was asked to a a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.The author specified these;

- [x] The C file name will be saved in the variable $CFILE
- [x] The output file should be named the same as the C file, but with the extension .s instead of .c
       * Example: if the C file is main.c, the output file should be main.s
- File Name: `100-intel`

**How I Went About With It.**

- Created a file called 100-intel under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the betty linter to check if my code meets the standard
- Executed the output file with the './' command.

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

In this task, I was asked to write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.The author specified these;

- [x] You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- [x] Your program should return 1
- [x] Your program should compile without any warnings when using the -Wall gcc option
- File Name: `101-quote.c`

**How I Went About With It.**

- Created a file called 101-quote.c under this directory.
- Used the VI text editor to write my script in the file.
- Checked my code with the betty linter to check if my code meets the standard
- Used gcc 'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c' to compile it
- Executed the output file with the './' command.

## Notes

These are the notes I personally gathered during the accomplishments of these tasks.

**NOTE**: Sorry, This section is still in progress and will be updated as time goes on.

## Installation

This project requires you to have these necessary installations to function appropriately.

- The latest version of UBUNTU
- A compiler ( GCC - GNU Compiler Collection ) 
- You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option 
- Betty Linter (also known as "Betty Style," refers to a coding style guide and linter for the C programming language.)
- **Refer To This Link To Install The Betty Linter:**
 *https://github.com/alx-tools/Betty#readme*

## Usage

+ This project and all of its contents are for learning purposes.
+ Some of these files contain basic scripts on how to achieve certain results.

## Contributions

+ This project and all of its contents are works/solutions that I came up with for the tasks assigned to me as a learner of the C language.
+ Contributions are allowed and will be taken into consideration.
+ With that being said please let me know if I missed something.
+ I am up for corrections.

## Copyrights

- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden.

## Contact

You can contact me via these handles. 

[![Email](https://img.shields.io/badge/Email-D14836?style=social&logo=gmail&logoColor=white)](mailto:solomonsefah13@gmail.com)

[![Twitter](https://img.shields.io/badge/Twitter-1DA1F2?style=social&logo=twitter)](https://twitter.com/hunterxcobby)

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=social&logo=linkedin)](https://www.linkedin.com/in/cobby-sefah-solomon-~-c-s-s-6460bb279/)

[![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=social&logo=instagram)](https://www.instagram.com/cobby_is_a_god)

[![WhatsApp](https://img.shields.io/badge/WhatsApp-25D366?style=social&logo=whatsapp)](https://wa.me/233557452729)

## My Github Stats
<img height="180em" src="https://github-readme-stats.vercel.app/api?username=hunterxcobby&show_icons=true&hide_border=true&&count_private=true&include_all_commits=true" />

