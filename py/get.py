##
## EPITECH PROJECT, 2021
## r_pv - lib/get.py
## File description:
## abc
##

# action of fetching a search element
class root:
    def __init__(self):
        self.a="get initialising"

    def a(self):
        return self.a

class get(root):
    def func_type(self, argc, argv):
        if argc == 3:
            print("initialise attempt as user wishes")
        elif argc == 2:
            print("initialise attempt but finding missing element")
        elif argc == 1:
            print("initialiing without time")
        else:
            temp = ["Please enter at least the characters to be displayed.", 84]
            return temp

    def arguments(self):
        # get args
        # # try get pipe
        # # except print("Please enter --help for help on the program or pipe this program for an output")
        print("Looking for arguments.")