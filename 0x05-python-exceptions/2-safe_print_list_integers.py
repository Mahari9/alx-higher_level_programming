#!/usr/bin/python

def safe_print_list_integers(my_list=[], x=0):
    """
    prints the first x elements of a list and only integers.
    Returns the real number of integers printed.
    use "{:d}".format() to print an integer.
    """
    num_intprnt = 0
    for i in range(x):
        try:
            print("{:d}".format(my_list[x]), end="")
            num_intprnt += 1
        except(ValueError, TypeError):
            continue
    print("")
    return num_intprnt
