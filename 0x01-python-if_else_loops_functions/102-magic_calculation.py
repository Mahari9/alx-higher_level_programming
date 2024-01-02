#!/usr/bin/python3
def magic_calculation(a, b, c):
    """A function that is magic calculation of some Python bytecode"""
    if a < b:
        return c
    elif c > b:
        return a + b
    else:
        return a * b - c
