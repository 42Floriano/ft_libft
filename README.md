# Libft

## Introduction
Libft is a project that involves creating a library of functions that can be used in various other projects. The library includes a collection of functions from the standard C library (libc) as well as some additional useful functions.

## File Structure
The project has the following file structure:

- `.c` Files: These files contain the implementation of all functions.
- `.h` (Header) File: This file, `libft.h`, includes all the necessary libraries and function prototypes. Make sure to include `libft.h` in all your `.c` files.
- `Makefile`: This file is used to compile the project. Once you have created your `Makefile`, you can compile your project by simply typing `make`.

## Functions
The `libft` library supports the following functions:

### Functions from `<ctype.h>`
- `ft_isalpha`: Checks for an alphabetic character.
- `ft_isdigit`: Checks for a digit (0 through 9).
- `ft_isalnum`: Checks for an alphanumeric character.
- `ft_isascii`: Checks whether c fits into the ASCII character set.
- `ft_isprint`: Checks for any printable character.
- `ft_toupper`: Convert char to uppercase.
- `ft_tolower`: Convert char to lowercase.

### Functions from `<string.h>`
- `ft_memset`: Fill memory with a constant byte.
- `ft_strlen`: Calculate the length of a string.
- `ft_bzero`: Zero a byte string.
- `ft_memcpy`: Copy memory area.
- `ft_memmove`: Copy memory area.
- `ft_strlcpy`: Copy string to a specific size.
- `ft_strlcat`: Concatenate string to a specific size.
- `ft_strchr`: Locate character in string.
- `ft_strrchr`: Locate character in string.
- `ft_strncmp`: Compare two strings.
- `ft_memchr`: Scan memory for a character.
- `ft_memcmp`: Compare memory areas.
- `ft_strnstr`: Locate a substring in a string.
- `ft_strdup`: Creates a duplicate for the string passed as a parameter.

### Functions from `<stdlib.h>`
- `ft_atoi`: Convert a string to an integer.
- `ft_calloc`: Allocates memory and sets its bytes' values to 0.

### Non-standard functions
- `ft_substr`: Returns a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims the beginning and end of string with a specific set of chars.
- `ft_split`: Splits a string using a char as a parameter.
- `ft_itoa`: Converts a number into a string.
- `ft_strmapi`: Applies a function to each character of a string.
- `ft_striteri`: Applies a function to each character of a string.
- `ft_putchar_fd`: Output a char to a file descriptor.
- `ft_putstr_fd`: Output a string to a file descriptor.
- `ft_putendl_fd`: Output a string to a file descriptor, followed by a new line.
- `ft_putnbr_fd`: Output a number to a file descriptor.

### Linked list functions
- `ft_lstnew`: Creates a new list element.
- `ft_lstadd_front`: Adds an element at the beginning of a list.
- `ft_lstsize`: Counts the number of elements in a list.
- `ft_lstlast`: Returns the last element of the list.
- `ft_lstadd_back`: Adds an element at the end of a list.
- `ft_lstclear`: Deletes and frees a list.
- `ft_lstiter`: Not done
- `ft_lstmap`: Not done
