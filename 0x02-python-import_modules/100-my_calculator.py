#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    from calculator_1 import *
    num_of_args = len(sys.argv[1:])

    operators = {
        "+": add(a, b),
        "-": sub(a, b),
        "*": mul(a, b),
        "/": div(a, b)}

    def driver():
        a = int(sys.argv[1])
        op = sys.argv[2]
        b = int(sys.argv[3])

        if op not in operators.keys():
            print('Unknown operator. Available operators: +, -, * and /')
        else:
            result = operators(a, b)
            print('{:d} {:s} {:d} = {:d}'.format(a, op, b, result))
            return result

    if num_of_rags != 3:
        print('Usage: ./100-my_calculator.py <a> <operator> <b>')
        sys.exit(1)
    else:
        driver()
