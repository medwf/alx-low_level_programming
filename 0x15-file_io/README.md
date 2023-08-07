# 0x15. C - File I/O
## General
  - Look for the right source of information online
  - How to create, open, close, read and write files
  - What are file descriptors
  - What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
  - How to use the I/O system calls open, close, read and write
  - What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
  - What are file permissions, and how to set them when creating a file with the open system call
  - What is a system call
  - What is the difference between a function and a system call
   - you can use this `webside` `https://www.codequoi.com/en/handling-a-file-by-its-descriptor-in-c/?utm_medium=email&_hsmi=74688758&_hsenc=p2ANqtz--2Dop2LRDVSPtSY_e6nKEtQiTUaIa2RfmMHZiBIS7PG9rH5U2TrynrkRMP-FB1btoZnUDo6CnWdeUAmFcHNqY3zT5bsg&utm_content=74688758&utm_source=hs_automation`.

### Tasks.
0. Write a function that reads a text file and prints it to the POSIX standard output.
   `need to now open(); read(); close(); and return (-1) if it failed`.

