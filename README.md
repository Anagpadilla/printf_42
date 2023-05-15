# 📝 Printf

## Description 

This project aims to replicate the functionality of the original printf function.

The following conversions must be implemented:
| Conversion  | Description														 			|
|-------|-----------------------------------------------------------------------------------|
| **%c** | Prints a single character.       													|
| **%s** | Prints a string (as defined by default in C).											|
| **%p** | The void pointer * given as argument is printed in hexadecimal format.								|
| **%d** | Prints a decimal number (base 10).																	|
| **%i** | Prints an integer in base 10.               											|
| **%u** | Prints an unsigned decimal number (base 10).               									|
| **%x** | Prints a hexadecimal number (base 16) in lowercase.                				|
| **%X** | Prints a hexadecimal number (base 16) in uppercase.                				|
| **%%** | Prints the percentage symbol.                 											|

◦ The printf function returns the number of characters printed, or a negative value if an error occurs.

◦ Buffer handling of the original must not be implemented.

Prototype of the function:

```C
int ft_printf(char const *s, ...);
```

## Authorised functions 

| Function | Description |
|-------|-----------------------------------------------------------------------------------|
| malloc | Request a block of memory of the size supplied as a parameter.     													|
| free | Deallocate a block of memory that was previously allocated by a call. 											|
| write | Causes the bytes you specify from the buffer to be written to the selected file descriptor.								|
| va_start | Allows access to the arguments of the varied function.														|
| va_arg | Accesses the next argument of the miscellaneous function.               											|
| va_copy | Makes a copy of the arguments of the variadic function.               									|
| va_end | Ends the path of the arguments of the variadic function.

# Contact 📥

◦ Email: ana.g.p.22@gmail.com

◦ Linkedin: https://www.linkedin.com/in/ana-garcia-padilla/
