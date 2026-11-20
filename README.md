This project has been created as part of the 42 curriculum by mousabir.

## Libft Description

Libft is a project from the 42 curriculum that consists of creating a personal C library containing a collection of useful functions.

The main objective of this project is to recreate several standard C library functions, implement additional utility functions, and understand how they work internally. Instead of relying entirely on existing library functions, Libft requires us to implement these functions from scratch while following the 42 Norm.

This library provides reusable functions for string manipulation, memory management, character checking, type conversion, and linked list manipulation.

The resulting libft.a static library can be reused in future C projects, reducing code duplication and improving code organization.

Instructions

To compile and use this library, you need:

Clone the repository and enter the project directory:

git clone 
cd libft

Compile the library using:

- make all

This generates the static library libft.a, which can be linked to other C programs.

Makefile Rules

The Makefile provides the following commands:

make: Compiles the source files and creates libft.a.
make clean: Removes the object files (.o).
make fclean: Removes the object files and the compiled library.
make re: Performs a full rebuild of the library.
Using the Library


Libft is organized into several categories of functions. Each category provides a set of reusable operations commonly needed in C programming.

1. Character Checking and Conversion

These functions analyze individual characters or convert them between lowercase and uppercase.

Function	Description
ft_isalpha	Checks whether a character is an alphabetic letter.
ft_isdigit	Checks whether a character is a decimal digit.
ft_isalnum	Checks whether a character is alphanumeric.
ft_isascii	Checks whether a value belongs to the ASCII range.
ft_isprint	Checks whether a character is printable.
ft_toupper	Converts a lowercase letter to uppercase.
ft_tolower	Converts Usage

2. String Manipulation

These functions measure, search, compare, and manipulate strings.

Function	Description
ft_strlen	Returns the length of a string, excluding the terminating null character.
ft_strchr	Finds the first occurrence of a character in a string.1
ft_strrchr	Finds the last occurrence of a character in a string.
ft_strncmp	Compares two strings up to a specified number of characters.
ft_strlcpy	Copies a string into a destination buffer with a size limit.
ft_istrlcat	Appends a string to a destination buffer with a size limit.
ft_strnstr	Searches for a substring within a limited portion of a string.
ft_strdup	Allocates memory and creates a duplicate of a string.
ft_substr	Creates a substring from a given starting index and length.
ft_strjoin	Concatenates two strings into a newly allocated string.
ft_strtrim	Removes specified characters from the beginning and end of a string.
ft_split	Splits a string into an array of strings using a delimiter.
ft_strmapi	Creates a new string by applying a function to each character(her wi sey now consept is pointer to function )
ft_striteri	Applies a function to each character of a string by index.
3. Memory Management

Function	Description
ft_memset	Fills a memory block with a specified byte value.
ft_bzero	Sets a memory block to zero.
ft_memcpy	Copies a specified number of bytes between non-overlapping memory regions.
ft_memmove	Copies memory safely when the source and destination overlap.
ft_memchr	Searches for a byte in a memory block.
ft_memcmp	Compares two memory blocks byte by byte.
ft_calloc	Allocates memory for multiple elements and initializes it to zero.
4. Conversion and Output

These functions convert values or write data to a file descriptor.

Function	Description
ft_atoi	Converts the initial numeric portion of a string into an integer.
ft_itoa	Converts an integer into a newly allocated string.
ft_putchar_fd	Writes a character to a specified file descriptor.
ft_putstr_fd	Writes a string to a specified file descriptor.
ft_putendl_fd	Writes a string followed by a newline to a specified file descriptor.
ft_putnbr_fd	Writes an integer to a specified file descriptor.

5. Linked List Functions

Function	Description
ft_lstnew	Creates a new list node.
ft_lstadd_front	Adds a node to the beginning of a list.
ft_lstsize	Counts the nodes in a list.
ft_lstlast	Returns the last node of a list.
ft_lstadd_back	Adds a node to the end of a list.
ft_lstdelone	Deletes one node using a specified deletion function.
ft_lstclear	Deletes all nodes in a list and releases their allocated content.
ft_lstiter	Applies a function to the content of every node.
ft_lstmap	Creates a new list by applying a function to each node's content.

Reusability: Functions can be reused across different projects.
Memory management: Dynamically allocated memory must be handled carefully to prevent memory leaks.
Header file: libft.h contains function prototypes and the definitions required to use the library.
Error handling: Functions that allocate memory should handle allocation failures appropriately.

###Resources

### Web and AI Tools

- **Stack Overflow:** Used to search for solutions to specific C programming problems and find explanations of functions and concepts.

- **ChatGPT (AI):** Used as an additional research tool when I could not find useful information about a function or its behavior on the web, or when searching online was taking too much time. I used it mainly to clarify function definitions, understand concepts, and identify relevant edge cases.

  I used AI as a support tool for research and understanding, not as a programmer to write or generate my code from scratch. I wrote the implementations myself and used these resources to help me understand what I was doing.

- Linux man-pages

Documentation for functions such as malloc, free, write, and other system calls.

Author
Login: mousabir
School: 42
Project: Libft
