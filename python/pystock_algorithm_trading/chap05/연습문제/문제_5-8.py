def get_abbr(data_list):
    result = []
    for data in data_list:
        result.append(data[:3])
    return result


print(get_abbr(["Seoul", "Daegu", "Kwangju", "Jeju"]))
