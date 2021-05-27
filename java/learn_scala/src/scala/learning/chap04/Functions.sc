def hi = "hi"
hi

def hi: String = "hi"

def multiplier(x: Int, y: Int): Int = { x * y }
multiplier(6, 7)

def safeTrim(s: String): String = {
  if (s == null) return null
  s.trim()
}


// Procedures

def log(d: Double) = println(f"Got value $d%.2f")

def log(d: Double): Unit = println(f"Got value $d%.2f")

log(2.23535)

def log(d: Double) { println(f"Got value $d%.2f") }


// Funcions with Empty Parentheses

def hi(): String = "hi"
hi()
hi


// Function Invocation with Expression Blocks

def formatEuro(amt: Double) = f"€$amt%.2f"
formatEuro((3.4645))

formatEuro { val rate = 1.32; 0.235 + 0.7123 + rate * 5.32 }


// Recursuve Functions

//def power(x: Int, n: Int): Long = {
//  if (n >= 1) x * power(x, n-1)
//  else 1
//}
//
//power(2, 8)
//power(2, 1)
//power(2, 0)

@annotation.tailrec
def power(x: Int, n: Int, t: Int = 1): Int = {
  if (n < 1) t
  else power(x, n-1, x*t)
}

power(2, 8)


// Nested Functions

def max(a: Int, b: Int, c: Int) = {
  def max(x: Int, y: Int) = if (x > y) x else y
  max(a, max(b, c))
}

max(42, 181, 19)


// Calling Function with Naed Parameters

def greet(prefix: String, name: String) = s"$prefix $name"

val greeting1 = greet("Ms", "Brown")

val greeting2 = greet(name = "Brown", prefix = "Mr")


// Parameters with Default Values

def greet(prefix: String = "", name: String) = s"$prefix$name"

val greeting1 = greet(name = "Paul")

def greet(name: String, prefix: String = "") = s"$prefix$name"

val greeting2 = greet("Ola")


// Vararg Parameters

def sum(items: Int*): Int = {
  var total = 0
  for (i <- items) total += i
  total
}

sum(10, 20, 30)

sum()


// Parameter Groups

def max(x: Int)(y: Int) = if (x > y) x else y

val larger = max(20)(39)


// Type Parameters

def identity(s: String): String = s

def identity(i: Int): Int = i

def identity(a: Any): Any = a

//val s: String = identity("Hello")

def identity[A](a: A): A = a

val s: String = identity[String]("Hello")

val d: Double = identity[Double](2.717)


// Methods and Operators

val s = "vacation.jpg"

val isJPEG = s.endsWith(".jpg")

val d = 65.642
d.round
d.floor
d.compare(18.0)
d.+(2.721)

d compare 18.0
d + 2.721

1 + 2 + 3


// Writing Readable Functions

/**
 * Returns the input string without leading or trailing
 * whitespace, or null if the input string is null.
 * @param s the input string to trim, or null.
 */
def safeTrim(s: String): String = {
  if (s == null) return null
  s.trim()
}

