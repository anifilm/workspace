// Strings

val hello = "Hello There"

val signature = "With Regards, \nYour friend"

val greeting = "Hello, " + "World"

val matched = (greeting == "Hello, World")

val theme = "Na " * 16 + "Batman!"

val greeting =
  """She suggested reformatting the file
    |by replacing tebs (\t) with newlines (\n);
    |"Why do that?", he asked.""".stripMargin


// String interpolation

val approx = 355 / 113f

println("Pi, using / 355/113, is about " + approx + ".")

println(s"Pi, using 355/113, is about $approx.")

val item = "apple"

s"How do you like them ${item}s?"

s"Fish n chips n vinegar, ${"pepper " * 3}salt"

val item = "apple"

f"I wrote a new $item%.3s today"

f"Enjoying this $item ${355/113.0}%.5f times today"


// Regular expressions

val input = "Enjoying this apple 3.14159 times today"

val pattern = """.* apple ([\d.]+) times .*""".r

val pattern(amountText) = input

val amount = amountText.toDouble
