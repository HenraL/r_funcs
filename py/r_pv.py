##
# EPITECH PROJECT, 2021
## r_pv - r_pv.py
# File description:
# abc
##

# Created by Henry Letellier

__Author__ = "Henry Letellier"
__Author_tag_name__ = "HenraL"
__Github__ = "HenraL"
__Github_link__ = "https://github.com/HenraL/"
__Website__ = "https://henral.github.io/r_pv/"
__disclaimer__ = f"This program is provided as if and without any warranty except for that if downloaded from the author's website {__Website__}."
__watermark__ = "(c) Created by Henry Letellier"
__Version__ = 1.0

from time import sleep


class root:
    def __init__(self):
        self.a = "initialised"
        # The table time units
        self.convertion_list = {"ms": 1, "s": 1000, "min": 60000, "h": 3600000, "d": 86400000, "w": 604800000}  # , "m":2505600000000, "month":2505600000000, "y":31560000000, "year":31560000000}
        self.is_secs = ["s", "se", "sec", "secs", "seconds", "seco", "secon", "secons", "second"]
        self.is_min = ["m", "mi", "min", "minu", "minut", "minute", "minutes"]
        self.is_hour = ["h", "ho", "hou", "hour"]
        self.is_day = ["d", "da", "day"]
        self.is_week = ["w", "we", "wee", "week"]

    def a(self):
        return self.a

class recoded(root):
    def my_in(arg,check_list):
        for i in range(len(check_list)):
            if arg == check_list[i]:
                return True
        return False


class pv(root):
    def default(self):
        print("default")

class get(root):
    def func_type(self, argc, argv):
        if a == 3:
            print("ee")

    def arguments(self):
        # get args
        # # try get pipe
        # # except print("Please enter --help for help on the program or pipe this program for an output")
        print("Looking for arguments.")


def main(argc, argv):
    if my_len(argc) > 0:
        get.func_type(argc, argv)
    else:
        get.arguments(self)
