#!/usr/bin/python3
def magic_calculation(a, b):
    """
    Python function
    """
    result = 0
    for i in range(1, 3):
        try:
            if (i > a):
                raise (Exception('Too far'))
            else:
                result = (((a ** b) / i) + result)
        except (Exception):
            result = (b + a)
            break
    return (result)
