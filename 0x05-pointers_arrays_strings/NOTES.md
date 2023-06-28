## Notes

These are the notes I gathered during the accomplishments of these tasks;

**POINTERS**

- Pointers are variables in programming that store memory addresses. 
- In other words, a pointer is a variable that "points" to the memory location of another variable.
- Instead of directly holding a value, a pointer holds the address where the value is stored in memory
- Pointers are commonly used in programming languages like C and C++ to manipulate memory and access data indirectly.
- They allow efficient memory management and provide flexibility in working with complex data structures.

**How To Declare Pointers.**

- In C, You are always going to declare something.
- Anytime uou are declaring something in C, you meed to specify the data type of interest. i.e int, char, float 
- Never forget that the pointer is just a container
- It contains an address that points to something else.
- You must prefix the variable with an asterisk. To tell that the specificied variable is just there to store an address. 
- For example, int* ptr; declares a pointer variable ptr that can point to an integer value.

**How To Initialize Pointers.**

- Pointers are typically initialized by assigning them the address of another variable.
- If it is the first time you are assigning it is called initialization.
- We assigned it to the address. 
- In order to get the address of it, we fix the '&' to tell the program we need the address of it. 
- The ampersand sign is used to get the address of whatver it is a prefix to in C. 
- For example, int x = 10; int* ptr = &x; initializes the pointer ptr with the address of the variable x.

**Dereferencing Pointers.**

- Dereferencing a pointer means accessing the value stored at the memory address it points to.
- Always remember an address refers to a specific location in the RAM of the computer. 
- This process or method is done using the asterisk (*) operator.
- For example, int value = *ptr; assigns the value stored at the memory location pointed to by ptr to the variable value.

**Test Code**

    This is an example of a pointer with its printed values.

```c
#include <stdio.h>

int main(void)
{
int x = 10;
int *ptr = &x;   // ptr points to the memory address of x

int value = *ptr;  // Dereferencing ptr to access the value stored at that memory address

printf(" The memory address is %p\n", ptr);  //  Prints the memory address of the variable.
printf(" The value of the dereferenced pointer is %d\n", value); // Prints the value stored in the address. 

return (0);
}
```

**NOTE**: Sorry, This section is still in progress and will be updated as time goes on.
