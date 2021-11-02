##
## EPITECH PROJECT, 2021
## r_pv - lib/hidden_processes.py
## File description:
## abc
##
# functions that do not produce a visual output
from recoded import recoded

class root:
    def __init__(self):
        self.a="hidden_processes needs to be linked to the main self class"

class hidden_processes(root):
    """ This class contains all the processes that happen in the background and do not output anything on the terminal."""
    def convert_time(self, nb, wtype="s"):
        if wtype.lower() == "ms":
            total = [nb, 42]
            return total
        elif recoded.my_in(wtype.lower(), self.is_secs) == True:
            total = [nb * self.convertion_list["s"], 42]
            return total
        elif recoded.my_in(wtype.lower(), self.is_min) == True:
            total = [nb * self.convertion_list["min"], 42]
            return total
        elif recoded.my_in(wtype.lower(), self.is_hour) == True:
            total = [nb * self.convertion_list["h"], 42]
            return total
        elif recoded.my_in(wtype.lower(), self.is_day) == True:
            total = [nb * self.convertion_list["d"], 42]
            return total
        elif recoded.my_in(wtype.lower(), self.is_week) == True:
            total = [nb * self.convertion_list["w"], 42]
            return total
        else:
            total = ["Please enter ms for milliseconds, s for seconds, min for minutes, h four hours, d for days, w for weeks, default '' --> seconds", 84]
            return total

    def my_sleep(nb, wtype):  # nb, wait_type
        time = hidden_processes.convert_time(nb, wtype)
        if time[1] == 84:
            return time
        else:
            i = 0
            while i < time[0]:
                i += 1
            return 42

    def my_len(string):
        length = 0
        for i in string:
            length += 1
        return length
    