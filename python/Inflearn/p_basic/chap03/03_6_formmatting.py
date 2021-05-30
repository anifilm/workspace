# naming
# 해당 표시할 내용을 변수로 표시하여 입력
print("Product: %(name)10s, Price per unit: %(price)10.5f." % {"name":"Apple", "price":5.243})
print("Product: {name:>10s}, Price per unit: {price:10.5f}.".format(name="Apple", price=5.243))

# https://wikidocs.net/13
# https://www.python-course.eu/python3_formatted_output.php
# https://docs.python.org/3/tutorial/inputoutput.html
