def vector_size_check(*vector_variables):
    # value = 0
    # last_value = 0
    # for vec in vector_variables:
    #     value = len(vec)
    #     if last_value == 0:
    #         pass
    #     else:
    #         if value != last_value:
    #             return False
    #     last_value = len(vec)
    # return True
    return len(set([len(t) for t in vector_variables])) == 1

# print(vector_size_check([1, 2, 3], [2, 3, 4], [5, 6, 7])) # Expected value: True
# print(vector_size_check([1, 3], [2, 4], [6, 7])) # Expected value: True
# print(vector_size_check([1, 3, 4], [4], [6, 7])) # Expected value: False


def vector_addition(*vector_variables):
    if not vector_size_check(*vector_variables):
        raise ArithmeticError
    return [sum(t) for t in zip(*vector_variables)]

# print(vector_addition([1, 3], [2, 4], [6, 7])) # Expected value: [9, 14]
# print(vector_addition([1, 5], [10,4], [4, 7])) # Expected value: [15, 16]
# print(vector_addition([1, 3, 4], [4], [6,7]))  # Expected value: ArithmeticError


def vector_subtraction(*vector_variables):
    if not vector_size_check(*vector_variables):
        raise ArithmeticError
    # for vec in zip(*vector_variables):
    #     result = vec[0] - sum(vec[1:])
    # return result
    return [t[0]-sum(t[1:]) for t in zip(*vector_variables)]

# print(vector_subtraction([1, 3], [2, 4]))          # Expected value: [-1, -1]
# print(vector_subtraction([1, 5], [10, 4], [4, 7])) # Expected value: [-13, -6]


def scalar_vector_product(alpha, vector_variable):
    # result = []
    # for vec in vector_variable:
    #     result.append(alpha * vec)
    # return result
    return [alpha * t for t in vector_variable]

# print(scalar_vector_product(5, [1, 2, 3])) # Expected value: [5, 10, 15]
# print(scalar_vector_product(3, [2, 2]))    # Expected value: [6, 6]
# print(scalar_vector_product(4, [1]))       # Expected value: [4]


def matrix_size_check(*matrix_variables):
    return len(set([len(t) for t in matrix_variables])) == 1

# matrix_x = [[2, 2], [2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
# matrix_z = [[2, 4], [5, 3]]
# matrix_w = [[2, 5], [1, 1], [2, 2]]
#
# print(matrix_size_check(matrix_x, matrix_y, matrix_z)) # Expected value: False
# print(matrix_size_check(matrix_y, matrix_z))           # Expected value: True
# print(matrix_size_check(matrix_x, matrix_w))           # Expected value: True


def is_matrix_equal(*matrix_variables):
    # result = []
    # for vec in matrix_variables:
    #     for i in vec:
    #         for element in i:
    #             result.append(element)
    # return len(set(result)) == 1
    return len(set([element for vec in matrix_variables for i in vec \
                for element in i])) == 1

# matrix_x = [[2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
#
# print(is_matrix_equal(matrix_x, matrix_y, matrix_y, matrix_y)) # Expected value: False
# print(is_matrix_equal(matrix_x, matrix_x))                     # Expected value: True


def matrix_addition(*matrix_variables):
    if not matrix_size_check(*matrix_variables):
        raise ArithmeticError
    return [[sum(row) for row in zip(*t)] for t in zip(*matrix_variables)]

# matrix_x = [[2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
# matrix_z = [[2, 4], [5, 3]]
#
# print(matrix_addition(matrix_x, matrix_y))           # Expected value: [[4, 7], [4, 3]]
# print(matrix_addition(matrix_x, matrix_y, matrix_z)) # Expected value: [[6,11], [9, 6]]


def matrix_subtraction(*matrix_variables):
    if not matrix_size_check(*matrix_variables):
        raise ArithmeticError
    return [[row[0]-sum(row[1:]) for row in zip(*t)] for t in zip(*matrix_variables)]

# matrix_x = [[2, 2], [2, 2]]
# matrix_y = [[2, 5], [2, 1]]
# matrix_z = [[2, 4], [5, 3]]
#
# print(matrix_subtraction(matrix_x, matrix_y))           # Expected value: [[0, -3], [0, 1]]
# print(matrix_subtraction(matrix_x, matrix_y, matrix_z)) # Expected value: [[-2,-7], [-5,-2]]


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
# print(scalar_matrix_product(3, matrix_x)) # Expected value: [[6, 6], [6, 6], [6, 6]]
# print(scalar_matrix_product(2, matrix_y)) # Expected value: [[4,10], [4, 2]]
# print(scalar_matrix_product(4, matrix_z)) # Expected value: [[8,16], [20,12]]
# print(scalar_matrix_product(3, matrix_w)) # Expected value: [[6,15], [3, 3], [6, 6]]


def is_product_availability_matrix(matrix_a, matrix_b):
    # value = 0
    # last_value = 0
    # for a in matrix_a:
    #     value = len(a)
    #     for b in zip(*matrix_b):
    #         last_value = len(b)
    #         if value != last_value:
    #             return False
    # return True
    return len([a for a in zip(*matrix_a)]) == len([b for b in matrix_b])

# The matrix product of A and B (written AB) is defined if and only if Number of columns in A = Number of rows in B

# matrix_x = [[2, 5], [1, 1]]
# matrix_y = [[1, 1, 2], [2, 1, 1]]
# matrix_z = [[2, 4], [5, 3], [1, 3]]
#
# print(is_product_availability_matrix(matrix_y, matrix_z)) # Expected value: True
# print(is_product_availability_matrix(matrix_z, matrix_x)) # Expected value: True
# print(is_product_availability_matrix(matrix_z, matrix_w)) # Expected value: False //matrix_w가없습니다
# print(is_product_availability_matrix(matrix_x, matrix_x)) # Expected value: True


def matrix_product(matrix_a, matrix_b):
    if not is_product_availability_matrix(matrix_a, matrix_b):
        raise ArithmeticError
    return [[sum(a * b for a, b in zip(row_a, column_b)) for column_b in zip(*matrix_b)] for row_a in matrix_a]

# matrix_x= [[2, 5], [1, 1]]
# matrix_y = [[1, 1, 2], [2, 1, 1]]
# matrix_z = [[2, 4], [5, 3], [1, 3]]
#
# print(matrix_product(matrix_y, matrix_z)) # Expected value: [[9, 13], [10, 14]]
# print(matrix_product(matrix_z, matrix_x)) # Expected value: [[8, 14], [13, 28], [5, 8]]
# print(matrix_product(matrix_x, matrix_x)) # Expected value: [[9, 15], [3, 6]]
# print(matrix_product(matrix_z, matrix_w)) # Expected value: False
