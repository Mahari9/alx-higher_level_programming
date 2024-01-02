#!/usr/bin/python3
def uppercase(str):
    """
    A function that prints a string in uppercase
    followed by a new line
    """
    Us = ""
    for i in str:
        if ord(i) >= 97 and ord(i) <= 122:
            Us += chr(ord(i) - 32)
        else:
            Us += i
    print("{}".format(Us))
