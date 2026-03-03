# Libft

## Introduction

Libft is the first project at 42 School, consisting of recreating essential C standard library functions and additional utility functions. This library serves as a foundation for all future C projects at 42.

The project includes string manipulation, memory management, character validation, conversion functions, and linked list operations, all implemented from scratch following strict coding standards.

## Installation

Clone the repository and compile the library:

```bash
git clone https://github.com/NihalBai/Libft_42.git
cd Libft_42
make
```

This generates `libft.a`, a static library ready to use.

### Make Commands

```bash
make        # Compile the library
make bonus  # Compile with bonus functions
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

## Additional Information

### Function Overview

**Part 1 - Libc Functions**
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String functions: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Conversions: `ft_atoi`, `ft_toupper`, `ft_tolower`
- Allocation: `ft_calloc`, `ft_strdup`

**Part 2 - Additional Functions**
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Bonus - Linked Lists**
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

### Compilation with Your Project

```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

Don't forget to include the header:
```c
#include "libft.h"
```
