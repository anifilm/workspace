# Pickle

import pickle

class Multiply():
    def __init__(self, multiplier):
        self.multiplier = multiplier

    def multiply(self, number):
        return number * self.multiplier

multiply = Multiply(5)
multiply.multiply(10)

file = open("./multiply_object.bin", "wb")
pickle.dump(multiply, file)

file.close()

file = open("./multiply_object.bin", "rb")
multiply_pickle = pickle.load(file)
multiply_pickle.multiply(5)
