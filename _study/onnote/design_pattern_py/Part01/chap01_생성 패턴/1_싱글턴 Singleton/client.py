from operation_singleton import OperationSingleton


class Client:
    def main(self):
        calculatorSingleton = OperationSingleton.getInstance()

        firstNumber = 100
        secondNumber = 20

        calculatorSingleton.operate(OperationSingleton.ADD_OPERATION, firstNumber, secondNumber)
        calculatorSingleton.operate(OperationSingleton.SUBSTRACT_OPERATION, firstNumber, secondNumber)
        calculatorSingleton.operate(OperationSingleton.MULTIPLY_OPERATION, firstNumber, secondNumber)
        calculatorSingleton.operate(OperationSingleton.DIVIDE_OPERATION, firstNumber, secondNumber)


client = Client()
client.main()
