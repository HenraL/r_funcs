##
## EPITECH PROJECT, 2021
## r_pv - lib/recoded.py
## File description:
## abc
##

# recoding basic functions such as element in list
class recoded(root):
    def my_in(arg,check_list):
        for i in range(len(check_list)):
            if arg == check_list[i]:
                return True
        return False
