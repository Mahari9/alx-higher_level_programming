#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    new_matrix = []
    for row in matrix:
        sq_list = list(map(lambda x: x**2, row))
        new_matrix.append(sq_list)
    return new_matrix
