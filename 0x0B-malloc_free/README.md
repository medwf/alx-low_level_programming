# 0x0B. C - malloc, free

## about 
### Dynamic allocation
1. Malloc
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

    - Prototype: void *malloc(size_t size);
    - where void * means it is a pointer to the type of your choice
    - and size is the number of bytes your need to allocate
2. Free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).

    - Prototype: void free(void *ptr);
    - where ptr is the address of the memory space previously allocated by and returned by a call to malloc

3. Valgrind
When writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program Valgrind in order to ensure we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection, and profiling.

## Task
 0. Float like a butterfly, sting like a bee : Write a function that creates an array of chars, and initializes it with a specific char.

    - Prototype: char *create_array(unsigned int size, char c);
    - Returns NULL if size = 0
    - Returns a pointer to the array, or NULL if it fails

1. The woman who has no imagination has no wings : Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    - Prototype: char *_strdup(char *str);
    - The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
    - Returns NULL if str = NULL
    - On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

2. He who is not courageous enough to take risks will accomplish nothing in life : Write a function that concatenates two strings.
    - Prototype: char *str_concat(char *s1, char *s2);
    - The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
    - if NULL is passed, treat it as an empty string
    - The function should return NULL on failure

3. If you even dream of beating me you'd better wake up and apologize : Write a function that returns a pointer to a 2 dimensional array of integers.
    -  Prototype: int **alloc_grid(int width, int height);
    - Each element of the grid should be initialized to 0
    - The function should return NULL on failure
    - If width or height is 0 or negative, return NULL

4. It's not bragging if you can back it up : Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
    -  Prototype: void free_grid(int **grid, int height);
    - Note that we will compile with your alloc_grid.c file. Make sure it compiles.

5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe : Write a function that concatenates all the arguments of your program.
    - Prototype: char *argstostr(int ac, char **av);
    - Returns NULL if ac == 0 or av == NULL
    - Returns a pointer to a new string, or NULL if it fails
    - Each argument should be followed by a \n in the new string

6.  I will show you how great I am : Write a function that splits a string into words.
    - Prototype: char **strtow(char *str);
    - The function returns a pointer to an array of strings (words)
    - Each element of this array should contain a single word, null-terminated
    - The last element of the returned array should be NULL
    - Words are separated by spaces
    - Returns NULL if str == NULL or str == ""
    - If your function fails, it should return NULL 