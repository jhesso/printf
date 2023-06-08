# printf

For the ft_printf project of the 42 school cursus, we must recreate the famous C library printf function. This project teaches us about variadic arguments.

- Supported conversions: %, c, s, p, i, d, u, x, X

## Status
Finished: 2022-12-19. Grade: 100/100.

## Usage

``make`` or ``make bonus`` to compile.

### Basic Usage
For example, let's create a ``main.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Hello World!\n");
      return (0);
}
```

Compile the ``main.c`` file with the ft_printf library and run the program:
```bash
./a.out
```
Output should be:
```
Hello World!
```

---
Made by jhesso: jhesso@student.hive.fi | LinkedIn: [jhesso](https://www.linkedin.com/in/juho-hesso-a75993171/)
