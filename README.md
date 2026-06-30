*This project has been created as part of the 42 curriculum by rzimaeva.*

# Description
The libft project consists of creating a personal, standalone library of C functions. It serves as a foundational toolkit that reimplements standard libc functions, alongside custom memory, string, and linked list manipulation utilities, to be reused throughout the entire 42 curriculum.

The project is broken down into three distinct parts:
1- Libc Functions (Standard Reimplementations)

Reimplementation of essential functions from standard libraries like <ctype.h>, <string.h>, and <stdlib.h>:

    Character Checks: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower

    String Manipulation: ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strlcpy, ft_strlcat, ft_strnstr, ft_atoi

    Memory Management: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc, ft_strdup

2- Additional Functions (Custom Utilities)

Custom string and file descriptor manipulation functions not found in the standard libc:

    ft_substr: Extracts a substring from a string.

    ft_strjoin: Concatenates two strings into a new allocated string.

    ft_strtrim: Trims specified characters from the start and end of a string.

    ft_split: Splits a string into an array of strings using a delimiter character.

    ft_itoa: Converts an integer into a string.

    ft_strmapi & ft_striteri: Applies a function to each character of a string.

    ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd: Output primitives targeting specific file descriptors.

3- Bonus Functions (Linked List Manipulation)

A set of functions dedicated to managing and manipulating a custom linked list structure (t_list):

    ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

# Instructions
Compilation

The project includes a Makefile that complies with standard 42 rules (-Wall -Wextra -Werror) and contains the required rules: all, clean, fclean, re, and bonus.

To compile the mandatory library functions:

  make
  
To compile the library including the bonus linked list functions:

  make bonus

To remove all object files (.o):

  make clean

To remove all object files and the compiled binary library (libft.a):

  make fclean

To force a complete re-compilation from scratch:

  make re

Compile your program with the following flags:

cc main.c -L. -lft -I. -o program

# Resources
I did my project with peer learning and used the Standard C Documentation: Unix Programmer's Manual sections ctype(3), string(3), stdlib(3).
