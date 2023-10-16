#include "main.h"
int main(void)
{
    int len;
    int len2;
  
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
 
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
     _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("%i - %i = %i\n", 1024, 2048, -1024);
    _printf("%i\n", 0);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("iddi%diddiiddi\n", 1024);
    _printf("Let's try to printf a simple sentence.\n");
    _printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("%c\n", 'S');
printf("%c\n", 'S');
_printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("A char inside a sentence: %c. Did it work?\n", 'F');
_printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
_printf("%%");
printf("%%");
_printf("Should print a single percent sign: %%\n");
printf("Should print a single percent sign: %%\n");
_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
_printf("css%ccs%scscscs", 'T', "Test");
printf("css%ccs%scscscs", 'T', "Test");
_putchar('\n');

    
    return 0;
}
