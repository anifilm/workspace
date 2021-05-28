val upper = "hello, world".map(c => c.toUpper)

val upper = "hello, world".map(_.toUpper)

val upper = "hello, world".filter(_ != 'l').map(_.toUpper)

for (c <- "hello") println(c)

val upper = for (c <- "hello, world") yield c.toUpper

val result = for {
  c <- "hello, world"
  if c != 'l'
} yield c.toUpper

"hello".foreach(println)

// Understanding how map works

// first example
"HELLO".map(c => (c.toByte+32).toChar)

// second example
"Hello".map{ c =>
  (c.toByte+32).toChar
}

// write your own method that operates on a character
def toLower(c: Char): Char = (c.toByte+32).toChar

// use that method with map
"HELLO".map(toLower)

val s = "HELLO"

for (c <- s) yield toLower(c)

"hello".getBytes

"hello".getBytes.foreach(println)
