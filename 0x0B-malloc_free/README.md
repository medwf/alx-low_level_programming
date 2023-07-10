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
1. 0. Float like a butterfly, sting like a bee : Write a function that creates an array of chars, and initializes it with a specific char.

    - Prototype: char *create_array(unsigned int size, char c);
    - Returns NULL if size = 0
    - Returns a pointer to the array, or NULL if it fails

