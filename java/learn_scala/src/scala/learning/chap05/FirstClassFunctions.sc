// Function Types and Values

def double(x: Int): Int = x * 2

double(5)

val myDouble: (Int) => Int = double

myDouble(5)

val myDoubleCopy = myDouble

myDoubleCopy(5)


def double(x: Int):Int = x * 2

val myDouble = double _

val amount = myDouble(20)


def max(a: Int, b: Int) = if (a > b) a else b

val maximize: (Int, Int) => Int = max

maximize(50, 30)


def logStart() = "=" * 50 + "\nStarting NOW\n" + "=" * 50

val start: () => String = logStart

println(start())


// Higher-Order Functions

def safeStringOp(s: String, f: String => String) = {
  if (s != null) f(s) else s
}

def reverser(s: String) = s.reverse

safeStringOp(null, reverser)
safeStringOp("Ready", reverser)


// Function Literals

val doubler = (x: Int) => x * 2

val doubled = doubler(22)

val greeter = (name: String) => s"Hello, $name"

val hi = greeter("World")


def max(a: Int, b: Int) = if (a > b) a else b

val maximize: (Int, Int) => Int = max

val maximize = (a: Int, b: Int) => if (a > b) a else b

maximize(84, 96)


def logStart() = "=" * 50 + "\nStarting NOW\n" + "=" * 50

val start = () => "=" * 50 + "\nStarting NOW\n" + "=" * 50

println(start())


def safeStringOp(s: String, f: String => String) = {
  if (s != null) f(s) else s
}

safeStringOp(null, (s: String) => s.reverse)
safeStringOp("Ready", (s: String) => s.reverse)

safeStringOp(null, s => s.reverse)
safeStringOp("Ready", s => s.reverse)


// Placeholder Syntax

val doubler: Int => Int = _ * 2

def safeStringOp(s: String, f: String => String) = {
  if (s != null) f(s) else s
}

safeStringOp(null, _.reverse)
safeStringOp("Ready", _.reverse)

