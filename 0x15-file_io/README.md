#  C - File I/O

### man or help
- open
- close
- read
- write
- dprintf

## General
- Look for the right source of information online.
- How to create, open, close, read and write files.
- What are file descriptors.
- What are the 3 standard file descriptors, what are their purpose and what are their **POSIX** names.
- How to use the I/O system calls open, close, read and write.
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`.
- What are file permissions, and how to set them when creating a file with the open system call.
- What is a system call.
- What is the difference between a function and a system call.

### Compiling the file

- To compile, run gcc with the following flags.
- Replace `test_file.c` and `function_file.c`.
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 `test_file.c` `function_file.c` -o executeble
