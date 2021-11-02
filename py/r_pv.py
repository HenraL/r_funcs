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

# from time import sleep
from hidden_processes import hidden_processes as HP
from py.errors import errors
from recoded import recoded as recoded
from get import get as get
import sys

class root:
    def __init__(self, argv, Author, Author_tag_name, Github, Github_link, Website, disclaimer, watermark, Version):
        # class initialised var
        self.a = "initialised"
        # meta info
        self.__Author__ = Author
        self.__Author_tag_name__ = Author_tag_name
        self.__Github__ = Github
        self.__Github_link__ = Github_link
        self.__Website__ = Website
        self.__disclaimer__ = disclaimer
        self.__watermark__ = watermark
        self.__Version__= Version
        # The table time units
        self.convertion_list = {"ms": 1, "s": 1000, "min": 60000, "h": 3600000, "d": 86400000, "w": 604800000}  # , "m":2505600000000, "month":2505600000000, "y":31560000000, "year":31560000000}
        self.is_secs = ["s", "se", "sec", "secs", "seconds", "seco", "secon", "secons", "second"]
        self.is_min = ["m", "mi", "min", "minu", "minut", "minute", "minutes"]
        self.is_hour = ["h", "ho", "hou", "hour"]
        self.is_day = ["d", "da", "day"]
        self.is_week = ["w", "we", "wee", "week"]
        self.argv = argv
        self.argc = len(argv)
        # The tables to find which argument was called.

    def a(self):
        return self.a

class pv(root):
    def sorter(self, argv):
        if 
    def default(self):
        print("default")
    def p_progress(self):
        """-p, --progress           show progress bar"""
    def t_timer(self):
        """-t, --timer              show elapsed time"""
    def e_eta(self):
        """-e, --eta                show estimated time of arrival (completion)"""
    def i_fineta(self):
        """-I, --fineta             show absolute estimated time of arrival (completion)"""
    def r_rate(self):
        """-r, --rate               show data transfer rate counter"""
    def a_average_rate(self):
        """-a, --average-rate       show data transfer average rate counter"""
    def b_bytes(self):
        """-b, --bytes              show number of bytes transferred"""
    def t_buffer_percent(self):
        """-T, --buffer-percent     show percentage of transfer buffer in use"""
    def a_last_written(self):
        """-A, --last-written NUM   show NUM bytes last written"""
    def f_format(self):
        """-F, --format FORMAT      set output format to FORMAT"""
    def n_numeric(self):
        """-n, --numeric            output percentages, not visual information"""
    def q_quiet(self):
        """-q, --quiet              do not output any transfer information at all"""
    def w_wait(self):
        """-W, --wait               display nothing until first byte transferred"""
    def d_delay_start(self):
        """-D, --delay-start SEC    display nothing until SEC seconds have passed"""
    def s_size(self):
        """-s, --size SIZE          set estimated data size to SIZE bytes"""
    def l_line_mode(self):
        """-l, --line-mode          count lines instead of bytes"""
    def o_null(self):
        """-0, --null               lines are null-terminated"""
    def i_interval(self):
        """-i, --interval SEC       update every SEC seconds"""
    def w_width(self):
        """-w, --width WIDTH        assume terminal is WIDTH characters wide"""
    def h_height(self):
        """-H, --height HEIGHT      assume terminal is HEIGHT rows high"""
    def n_name(self):
        """-N, --name NAME          prefix visual information with NAME"""
    def f_force(self):
        """-f, --force              output even if standard error is not a terminal"""
    def c_cursor(self):
        """-c, --cursor             use cursor positioning escape sequences"""
    def l_rate_limit(self):
        """-L, --rate-limit RATE    limit transfer to RATE bytes per second"""
    def a_buffer_size(self):
        """-B, --buffer-size BYTES  use a buffer size of BYTES"""
    def c_no_splice(self):
        """-C, --no-splice          never use splice(), always use read/write"""
    def e_skip_errors(self):
        """-E, --skip-errors        skip read errors in input"""
    def s_stio_at_size(self):
        """-S, --stop-at-size       stop after --size bytes have been transferred"""
    def r_remote(self):
        """-R, --remote PID         update settings of process PID"""
    def p_pidfile(self):
        """-P, --pidfile FILE       save process ID in FILE"""
    def d_watchfd(self):
        """-d, --watchfd PID[:FD]   watch file FD opened by process PID"""
    def h_help(self):
        """-h, --help               show this help and exit"""
    def v_version(self):
        """-V, --version            show version information and exit"""
        print("r_pv.py:")
        print(f"-\tVersion:\t{self.__Version__}")
        print(f"-\tLicense:\t{self.__disclaimer__}")
        print(f"-\tWebsite:\t{self.__Github_link__}")
        print()

def main(self):
    if HP.my_len(self.argv) > 0:
        response=get.func_type(self.argc, self.argv)
        if response[1] == 84:
            temp = errors.display(response)
            return temp
        else:
            pass #continue on with the required functs
    else:
        response=get.arguments(self)
        if response[1] == 84:
            temp = errors.display(response)
            return temp
        else:
            pass #continue on with the required functs

RI=(sys.argv, __Author__, __Author_tag_name__, __Github__, __Github_link__, __Website__, __disclaimer__, __watermark__, __Version__)
main(RI)