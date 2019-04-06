first_value = 0
second_value = 0

for i in range(1, 10):
    if i is 5:
        continue
        first_value = i
        #print(first_value)
    if i is 10:
        break
        second_value = i
        #print(second_value)

print(first_value + second_value)
