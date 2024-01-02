#!/usr/bin/python3
for fstdig in range(0, 10):
    for sndig in range(fstdig + 1, 10):
        if fstdig == 8 and sndig == 9:
            print("{}{}".format(fstdig, sndig))
        else:
            print("{}{}".format(fstdig, sndig), end=", ")
