# 0x0E. C - Structures, typedef

About this project:

- What are structures, when, why and how to use them.
- How to use typedef.

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar

## File Descriptions

### [dog.h](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/dog.h "dog.h")
### DOG HEADER

### Mandatory

### [1-init_dog.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/1-init_dog.c   "1-init_dog.c")
Function that initialize a variable of type struct dog.  
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

### [2-print_dog.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/2-print_dog.c   "2-print_dog.c")
Function that prints a struct dog.  
Prototype: void print_dog(struct dog *d);  
Format: see example bellow.  
You are allowed to use the standard library.  
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil)).  
If d is NULL print nothing.

### [4-new_dog.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/4-new_dog.c   "4-new_dog.c")
Function that creates a new dog.  
Prototype: dog_t *new_dog(char *name, float age, char *owner);  
You have to store a copy of name and owner.  
Return NULL if the function fails.

### [5-free_dog.c](https://github.com/Valentinaga1/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/5-free_dog.c   "5-free_dog.c")
Function that frees dogs.  
Prototype: void free_dog(dog_t *d);