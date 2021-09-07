#!/usr/bin/python3
for i in range(97, 123):
    if i == 'e' and i == 'q':
        continue
    print("{:c}".format(i), end="")
