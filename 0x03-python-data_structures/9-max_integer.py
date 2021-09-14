#!/usr/bin/python3
def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None
    else:
        max_value = my_list.sort()
    print("{:d}".format(my_list[-1]))
