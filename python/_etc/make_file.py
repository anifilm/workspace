import os

for i in range(10, 67):
    for j in range(1, 11):
        f = open(str(i) + "-" + str(j) + "_.cs", "w")
        f.write("using System\n")
        f.write("\n")
        f.write("//\n")
f.close()
