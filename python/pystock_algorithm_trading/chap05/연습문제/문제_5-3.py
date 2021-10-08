import os

def get_text_list(path):
    get_list = os.listdir(path)
    ret_list = []
    for f in get_list:
        if f.endswith('txt'):
            ret_list.append(f)
    return ret_list


print(get_text_list("S:\VisualStudio\cpp\Beginning C++ Programming\Section 1 Introduction"))
