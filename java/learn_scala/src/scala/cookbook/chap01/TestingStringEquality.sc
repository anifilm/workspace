val s1 = "Hello"
val s2 = "Hello"
val s3 = "H" + "ello"

s1 == s2
s1 == s3

val s4: String = null

s3 == s4
s4 == s3

val s1 = "Hello"
val s2 = "hello"

s1.toUpperCase == s2.toUpperCase

val s1: String = null
val s2: String = null

//s1.toUpperCase == s2.toUpperCase // NullPointerException

val a = "Marisa"
val b = "marisa"

a.equalsIgnoreCase(b)
