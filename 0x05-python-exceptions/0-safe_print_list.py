#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    """Print x elememts of a list.
    Returns:
        The number of elements printed.
    """
    num_elem = 0
    for i in range(x):
        try:
            print("{}".format(my_list[i]), end="")
            num_elem += 1
        except Exception as error:
            break
    print("")
    return num_elem
