#!/usr/bin/python3
def fizzbuzz():
    """
    A function that  print the numbers from 1 to 100 separated by a space.
    For multiples of three, print Fizz instead of the number
    and for multiples of five print Buzz.
    For multiples of three and five, print FizzBuzz instead of the number.
    """
    for n in range(1, 101):
        if n % 3 == 0 and n % 5 == 0:
            print("FizzBuzz ", end="")
        elif n % 3 == 0:
            print("Fizz ", end="")
        elif n % 5 == 0:
            print("Buzz ", end="")
        else:
            print("{} ".format(n), end="")
