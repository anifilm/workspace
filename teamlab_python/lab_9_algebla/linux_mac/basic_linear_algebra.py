def vector_size_check(*vector_variables):
    # value = 0
    # last_value = 0
    # for vector in vector_variables:
    #     value = len(vector)
    #     if last_value == 0:
    #         pass
    #     else:
    #         if value != last_value:
    #             return False
    #     last_value = len(vector)
    # return True
    return len(set([len(vector) for vector in vector_variables])) == 1

# print(vector_size_check([1, 2, 3], [2, 3, 4], [5, 6, 7]))
# print(vector_size_check([1, 3], [2, 4], [6, 7]))
# print(vector_size_check([1, 2, 3], [3, 4], [6, 7]))


def vector_addition(*vector_variables):
    if not vector_size_check(*vector_variables):
        raise ArithmeticError
    return [sum(t) for t in zip(*vector_variables)]

# print(vector_addition([1, 3], [2, 4], [6, 7]))
# print(vector_addition([1, 5], [10, 4], [4, 7]))
# print(vector_addition([1, 3, 4], [4], [6, 7]))


def vector_subtraction(*vector_variables):
    if not vector_size_check(*vector_variables):
        raise ArithmeticError
    # for t in zip(*vector_variables):
    #     result = t[0] - sum(t[1:])
    #     print(result)
    return [t[0] - sum(t[1:]) for t in zip(*vector_variables)]

# print(vector_subtraction([1, 3], [2, 4]))
# print(vector_subtraction([1, 5], [10, 4], [4, 7]))


def scalar_vector_product(alpha, vector_variable):
    return [alpha * sum(t) for t in zip(vector_variable)]

# print(scalar_vector_product(5, [1, 2, 3]))
# print(scalar_vector_product(3, [2, 2]))
# print(scalar_vector_product(4, [1]))


def matrix_size_check(*matrix_variables):
    return len(set([len(matrix) for matrix in matrix_variables])) == 1

# matrix_x = [[2, 2], [2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
# matrix_z = [[2, 4], [5, 3]]
# matrix_w = [[2, 5], [1, 1], [2, 2]]
#
# print(matrix_size_check(matrix_x, matrix_y, matrix_z))
# print(matrix_size_check(matrix_y, matrix_z))
# print(matrix_size_check(matrix_x, matrix_w))


def is_matrix_equal(*matrix_variables):
    value = 0
    last_value = 0
    for matrix in matrix_variables:
        value = matrix
        print(value)
        if last_value == 0:
            pass
        else:
            if value != last_value:
                return False
        last_value = matrix
    return True
    # return set([matrix for for matrix in matrix_variables]) == 1

# matrix_x = [[2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
#
# print(is_matrix_equal(matrix_x, matrix_y, matrix_y, matrix_y,))
# print(is_matrix_equal(matrix_x, matrix_x))


def matrix_addition(*matrix_variables):
    if not matrix_size_check(*matrix_variables):
        raise ArithmeticError
    return [[sum(row) for row in zip(*t)] for t in zip(*matrix_variables)]

# matrix_x = [[2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
# matrix_z = [[2, 4], [5, 3]]
#
# print(matrix_addition(matrix_x, matrix_y))
# print(matrix_addition(matrix_x, matrix_y, matrix_z))


def matrix_subtraction(*matrix_variables):
    if not matrix_size_check(*matrix_variables):
        raise ArithmeticError
    return [[row[0] - sum(row[1:]) for row in zip(*t)] for t in zip(*matrix_variables)]

# matrix_x = [[2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
# matrix_z = [[2, 4], [5, 3]]
#
# print(matrix_subtraction(matrix_x, matrix_y))
# print(matrix_subtraction(matrix_x, matrix_y, matrix_z))


def matrix_transpose(matrix_variable):
    return [[element for element in t] for t in zip(*matrix_variable)]

# matrix_w = [[2, 5], [1, 1], [2, 2]]
# matrix_transpose(matrix_w)


def scalar_matrix_product(alpha, matrix_variable):
    return [[alpha * element for element in t] for t in matrix_variable]

# matrix_x = [[2, 2], [2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
# matrix_z = [[2, 4], [5, 3]]
# matrix_w = [[2, 5], [1, 1], [2, 2]]
#
# print(scalar_matrix_product(3, matrix_x))
# print(scalar_matrix_product(2, matrix_y))
# print(scalar_matrix_product(4, matrix_z))
# print(scalar_matrix_product(3, matrix_w))


def is_product_availability_matrix(matrix_a, matrix_b):
    value = 0
    last_value = 0
    for a in matrix_a:
        value = len(a)
        for b in zip(*matrix_b):
            last_value = len(b)
            if value != last_value:
                return False
    return True
    # return len(set([len(vector) for vector in vector_variables])) == 1

# matrix_x = [[2, 5], [1, 1]]
# matrix_y = [[1, 1, 2], [2, 1, 1]]
# matrix_z = [[2, 4], [5, 3], [1, 3]]
#
# print(is_product_availability_matrix(matrix_y, matrix_z))
# print(is_product_availability_matrix(matrix_z, matrix_x))
# print(is_product_availability_matrix(matrix_y, matrix_w))
# print(is_product_availability_matrix(matrix_x, matrix_x))


def matrix_product(matrix_a, matrix_b):
    if not is_product_availability_matrix(matrix_a, matrix_b):
        raise ArithmeticError
    return [[sum(a * b for a, b in zip(row_a, column_b)) for column_b in zip(*matrix_b)] for row_a in matrix_a]

# matrix_x = [[2, 5], [1, 1]]
# matrix_y = [[1, 1, 2], [2, 1, 1]]
# matrix_z = [[2, 4], [5, 3], [1, 3]]
#
# print(matrix_product(matrix_y, matrix_z))
# print(matrix_product(matrix_z, matrix_x))
# print(matrix_product(matrix_x, matrix_x))
# print(matrix_product(matrix_z, matrix_w))
