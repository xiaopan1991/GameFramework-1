//
// Project: clibparser
// Created by bajdcc
//

// 中断表（本文件可不包含，只为了说明）

enum INTR_TABLE {
    INTR_PUT_CHAR = 0,
    INTR_PUT_NUMBER = 1,
    INTR_PUT_HEX = 2,
    INTR_DEBUG = 3,
    INTR_PUT_FLOAT = 4,
    INTR_HOSTNAME = 5,
    INTR_PUT_DOUBLE = 6,
    INTR_PUT_LONG = 7,
    INTR_CHARACTER = 8,
    INTR_PUT_ULONG = 9,
    INTR_INPUT_LOCK = 10,
    INTR_INPUT_CHAR = 11,
    INTR_INPUT_STOP = 12,
    INTR_INPUT_STATE = 13,
    INTR_INPUT_VALID = 14,
    INTR_INPUT_SINGLE = 15,
    INTR_REDIRECT_IO = 16,
    INTR_PIPE_IO = 17,
    INTR_RESIZE = 20,
    INTR_MALLOC = 30,
    INTR_FREE = 31,
    INTR_EXIT = 40,
    INTR_STACKTRACE = 41,
    INTR_SEND_SIGNAL = 42,
    INTR_RECV_SIGNAL = 43,
    INTR_PID = 50,
    INTR_PUT_EXEC_FILE = 51,
    INTR_PUT_EXEC_WAIT = 52,
    INTR_PUT_EXEC_SLEEP = 53,
    INTR_PUT_EXEC_WAKEUP = 54,
    INTR_PUT_FORK = 55,
    INTR_PUT_IO_CONNECT = 56,
    INTR_PUT_KILL_CHILDREN = 57,
    INTR_SWITCH_TASK = 58,
    INTR_SET_CYCLE = 59,
    INTR_FS_GET_PWD = 60,
    INTR_FS_GET_USER = 61,
    INTR_FS_CD = 62,
    INTR_FS_MKDIR = 63,
    INTR_FS_TOUCH = 64,
    INTR_FS_OPEN = 65,
    INTR_FS_READ = 66,
    INTR_FS_CLOSE = 67,
    INTR_FS_RM = 68,
    INTR_FS_WRITE = 69,
    INTR_FS_TRUNCATE = 70,
    INTR_PATH_ADD = 71,
    INTR_PATH_REMOVE = 72,
    INTR_PUT_EXEC_SERVICE = 73,
    INTR_FS_COPY = 74,
    INTR_FS_LOAD = 75,
    INTR_FS_LEN = 76,
    INTR_FS_READ_TO_MEM = 77,
    INTR_FS_MKLINK = 78,
    INTR_SERVICE_TOGGLE = 79,
    INTR_WAIT_HANDLE = 80,
    INTR_SLEEP_RECORD = 100,
    INTR_SLEEP_REACH = 101,
    INTR_TIMESTAMP = 102,
    // MATH
    INTR_MATH_SQRT = 201,
    // GUI
    INTR_GUI_ENABLE = 301,
    INTR_GUI_LINETO = 302,
    INTR_GUI_MOVETO = 303,
    INTR_GUI_POINT = 304,
    INTR_GUI_COLOR = 305,
    INTR_GUI_CLEAR = 306,
    INTR_GUI_RECT = 307,
    INTR_GUI_FONT_REFRESH = 308,
    INTR_GUI_FONT_SIZE = 309,
    INTR_GUI_FONT_FAMILY = 310,
    INTR_GUI_DRAW_FONT = 311,
    INTR_GUI_BLUR = 312,
    INTR_GUI_LUA = 350,
    INTR_GUI_MUSIC_CTRL = 380,
    // WEB
    INTR_JSON_PARSE = 401,
    // WINDOW
    INTR_GUI_WINDOW_CREATE = 501,
    INTR_GUI_WINDOW_POST_MSG = 502,
    INTR_GUI_WINDOW_CREATE_COMCTL = 503,
    INTR_GUI_WINDOW_GET_BASE = 504,
    INTR_GUI_WINDOW_CONNECT_COMCTL = 505,
    INTR_GUI_WINDOW_COMCTL_SET_FLAG = 506,
    INTR_GUI_WINDOW_SET_STYLE = 507,
    INTR_GUI_WINDOW_SET_BOUND = 509,
    INTR_GUI_WINDOW_SET_TEXT = 510,
    INTR_GUI_WINDOW_SET_PTR = 511,
};
