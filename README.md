# Create Printf Function

**Specifiers:**

- `%c` - prints one single ASCII character
- `%s` - prints the array of characters(string)
- `%d` - prints decimal number
- `%i` - prints the value of type integer
- `%%` - prints one percentage sign instead of two

### Environment
* Language: C
* OS: Ubuntu 20.04 LTS
* Compiler: gcc 11.4.0
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### Usage

Prototype of function:

`int _printf(const char *format, ...)`

To use our printf function you need to include head file "main.h":

`#include "main.h"`

To get `man page` you can use:

`man _printf`

### Examples

```
#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
    char *str = "This is our printf function";
    char c = 'A';
    int number = 122;

    _printf("Char is %c\n", c);
    _printf("Str is %s\n", str);
    _printf("Integer is %d\n", number);

    return (0);
}
```

Output:
```

Char is A
Str is This is our printf function
Integer is 122

```


# Authors

+ Ali Mustafazada [Profile](https://github.com/AliiMustafa)
+ Yunis Gulamov [Profile](https://github.com/Yunis003)
