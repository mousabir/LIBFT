# libft

This project has been created as part of the 42 curriculum by YOUR_LOGIN.

## Libft Description

Libft is a project from the 42 curriculum that consists of creating a personal C library containing a collection of useful functions.

The main objective of this project is to recreate several standard C library functions, implement additional utility functions, and understand how they work internally. Instead of relying entirely on existing library functions, Libft requires us to implement these functions from scratch while following the 42 Norm.

This library provides reusable functions for string manipulation, memory management, character checking, type conversion, and linked list manipulation.

The resulting libft.a static library can be reused in future C projects, reducing code duplication and improving code organization.

Instructions
Requirements

To compile and use this library, you need:

A C compiler, such as cc or gcc.
GNU Make.
A Unix-like operating system, such as Linux or macOS.
Compilation

Clone the repository and enter the project directory:

git clone YOUR_REPOSITORY_URL
cd libft


Compile the library using:

- make


This generates the static library libft.a, which can be linked to other C programs.

Makefile Rules

The Makefile provides the following commands:

make: Compiles the source files and creates libft.a.
make clean: Removes the object files (.o).
make fclean: Removes the object files and the compiled library.
make re: Performs a full rebuild of the library.
Using the Library

To use Libft in a C project, include its header file and link the compiled library during compilation.

Libft is organized into several categories of functions. Each category provides a set of reusable operations commonly needed in C programming.

The exact functions included depend on the implementation submitted in this repository.

1. Character Checking and Conversion

These functions analyze individual characters or convert them between lowercase and uppercase.

Function	Description
ft_isalpha	Checks whether a character is an alphabetic letter.
ft_isdigit	Checks whether a character is a decimal digit.
ft_isalnum	Checks whether a character is alphanumeric.
ft_isascii	Checks whether a value belongs to the ASCII range.
ft_isprint	Checks whether a character is printable.
ft_toupper	Converts a lowercase letter to uppercase.
ft_tolower	ConvertsAI Usage
ChatGPT was used as a supplementary tool to clarify C programming concepts, understand function behavior, and help structure the README documentation. AI assistance was used for learning and documentation purposes, and the information was reviewed against the project requirements. an uppercase letter to lowercase.
2. String Manipulation

These functions measure, search, compare, and manipulate strings.

Function	Description
ft_strlen	Returns the length of a string, excluding the terminating null character.
ft_strchr	Finds the first occurrence of a character in a string.
ft_strrchr	Finds the last occurrence of a character in a string.
ft_strncmp	Compares two strings up to a specified number of characters.
ft_strlcpy	Copies a string into a destination buffer with a size limit.
ft_strlcat	Appends a string to a destination buffer with a size limit.
ft_strnstr	Searches for a substring within a limited portion of a string.
ft_strdup	Allocates memory and creates a duplicate of a string.
ft_substr	Creates a substring from a given starting index and length.
ft_strjoin	Concatenates two strings into a newly allocated string.
ft_strtrim	Removes specified characters from the beginning and end of a string.
ft_split	Splits a string into an array of strings using a delimiter.
ft_strmapi	Creates a new string by applying a function to each character.
ft_striteri	Applies a function to each character of a string by index.
3. Memory Management

These functions operate on blocks of memory rather than only on null-terminated strings.

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

If the bonus part is implemented, Libft also provides functions for manipulating singly linked lists using the t_list structure.

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
Implementation and Technical Choices

The library is implemented in C and follows the 42 coding standards.

The main technical principles include:

Modularity: Each function is implemented in its own source file, making the library easier to maintain.
Reusability: Functions can be reused across different projects.
Memory management: Dynamically allocated memory must be handled carefully to prevent memory leaks.
Static library: The ar utility is used to package compiled object files into libft.a.
Header file: libft.h contains function prototypes and the definitions required to use the library.
Error handling: Functions that allocate memory should handle allocation failures appropriately.
Resources

### AI Usage
ChatGPT was used as a supplementary tool to clarify C programming concepts, understand function behavior, and help structure the README documentation. AI assistance was used for learning and documentation purposes, and the information was reviewed against the project requirements.

Author
Login: mousabir
School: 42
Project: Libft