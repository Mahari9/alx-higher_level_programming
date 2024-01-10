#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

/**
 * print_python_bytes - print some basic info about Python bytes
 * @p: pointer to python obect
 * Return: Nothing
 */
void print_python_bytes(PyObject *p)
{
	size_t i, limit, size;
	char *str;

	printf("[.] bytes object info\n");
	if (strcmp(p->ob_type->tp_name, "bytes"))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	size = ((PyVarObject *)p)->ob_size;
	str = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %lu\n", size);
	printf("  trying string: %s\n", str);
	if (size >= 10)
		limit = 10;
	else
		limit = size + 1;
	printf("  first %lu bytes: ", limit);
	for (i = 0; i < limit; i++)
		printf("%02hhx%s", str[i], i + 1 < limit ? " " : "");
	printf("\n");
}

/**
 * print_python_list - print some basic info about Python lists
 * @p: pointer to python object
 * Return: Nothing
 */
void print_python_list(PyObject *p)
{
	int i;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %lu\n",
	       ((PyVarObject *)p)->ob_size);
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (i = 0; i < ((PyVarObject *)p)->ob_size; i++)
	{
		printf("Element %d: %s\n", i,
		       ((PyListObject *)p)->ob_item[i]->ob_type->tp_name);
		if (!strcmp(((PyListObject *)p)->ob_item[i]->ob_type->tp_name,
			    "bytes"))
			print_python_bytes(((PyListObject *)p)->ob_item[i]);

	}
}
