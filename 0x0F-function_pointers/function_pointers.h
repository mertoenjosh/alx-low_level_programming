#ifndef _FUNCPOINTERS_H_
#define _FUNCPOINTERS_H_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
