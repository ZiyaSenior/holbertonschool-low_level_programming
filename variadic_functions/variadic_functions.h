#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#define FORMAT(f) ("%"#f)

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_form - struct to define how to print arguments
 * @c: character
 * @f: pointer to function
 */

typedef struct print_form
{
	char *c;
	void (*f)();
}print_form_t;

#endif
