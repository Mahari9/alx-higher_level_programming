#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - C fun that prints some basic info about Python lists
 * @p: Pyobject pointer
 */

void print_python_list_info(PyObject *p)
{
	Py_ssize_t count;
	Py_ssize_t len = PyList_Size(p);
	PyListObject *plobj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", len);
	printf("[*] Allocated = %ld\n", plobj->allocated);

	for (count = 0; count < len; count++)
	{
		printf("Element %ld: %s\n", count,
		       Py_TYPE(plobj->ob_item[count])->tp_name);
	}
}
