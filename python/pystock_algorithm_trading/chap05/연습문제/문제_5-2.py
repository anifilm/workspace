def get_max_min(data_list):
    lt_max = max(data_list)
    lt_min = min(data_list)
    return (lt_max, lt_min)


max_val, min_val = get_max_min([23, 5, 64, 3, 8, 12, 6])
print(max_val, min_val)
