#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    """
    divides element by element 2 lists.
    """
    div_list = []
    for i in range(list_length):
        element = 0
        try:
            element = my_list_1[i] / my_list_2[i]
        except ZeroDivisionError:
            print('division by 0')
        except TypeError:
            print('wrong type')
        except IndexError:
            print('out of range')
        finally:
            div_list.append(element)

    return div_list
