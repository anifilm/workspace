def printName(first:String, last:String) = {
  println(first + " " + last)
}

printName("John","Smith")
// "John Smith"를 출력
printName(first = "John",last = "Smith")
// "John Smith"를 출력
printName(last = "Smith",first = "John")
// "John Smith"를 출력


def printName(first:String = "John", last:String = "Smith") = {
  println(first + " " + last)
}

printName(last = "Jones")
// "John Jones"를 출력
