# my_printf: Custom Implementation of printf

## Overview

`my_printf` is a custom implementation of the standard C library function `printf`. It allows formatted output to the console using format specifiers similar to the original `printf`. The implementation supports various format specifiers, including characters (`%c`), strings (`%s`), pointers (`%p`), integers (`%d`, `%i`), unsigned integers (`%u`), hexadecimal values (lowercase `%x`, uppercase `%X`), and the literal percentage symbol (`%%`).

## Functionality

The core function is `my_printf`, which works similarly to the standard `printf` but has been implemented from scratch using variadic arguments (`va_list`). It processes the format string to output the desired values, using helper functions to handle different format specifiers.

### Key Components

- **`my_printf()`**: Main function that parses the format string and handles variadic arguments.
- **Helper Functions**:
  - `cflag()`, `sflag()`, `diflag()`, `uflag()`, `xflag()`, `bigxflag()`, `pflag()`, `percflag()`: Functions that handle specific format specifiers.
  - `ft_putchar()`, `ft_putnbr()`, `ft_putstr()`: Utility functions for character and string output.
  - **Printing Helpers** (`uprint()`, `smallxprint()`, `bigxprint()`, `ptrprint()`): Functions to handle printing unsigned integers, hexadecimal values, and pointers.
- **`conv_tab()`**: Dispatch function that determines which flag handler to call based on the format specifier.

### Example Usage

The `test_my_printf()` function in the code compares the output and return value of `my_printf` with the standard `printf` for different format specifiers. This helps verify that `my_printf` behaves as expected.

## Compilation

To compile the code, use a `Makefile` that defines the target `libftprintf.a`. You can include `my_printf.h` in your project and use `my_printf` in the same way you would use `printf`.

```sh
make
```
This will generate the static library, which you can link to your projects.

## Example Output

The `test_my_printf()` function demonstrates the functionality by calling both `my_printf` and `printf`, and then printing the return values for comparison:

```c
res_mine: 22
Mine: Character: A
res_real: 22
Real: Character: A
...
```

## Limitations

The current implementation does not support floating-point numbers (`%f`) or some of the more advanced formatting options (`*`, `+`, etc.). Additionally, some edge cases may not be fully handled, especially regarding buffer overflows or non-standard inputs.

## Conclusion

`my_printf` is a simplified version of the standard `printf` function, useful for learning about variadic arguments and implementing formatted output. It provides an opportunity to understand how a common C function works internally and practice implementing various features in C.

