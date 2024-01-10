#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str) or roman_string is None:
        return 0
    Rom_num = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    num = 0
    prv = 0
    for n in reversed(roman_string.upper()):
        value = Rom_num[n]
        if value < prv:
            num -= value
        else:
            num += value
        prv = value

    return num
