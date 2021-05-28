"Hello, world".getClass.getName

val s = "Hello, world"
s.length // 12

val s = "Hello" + " world"

"hello".foreach(println)

for (c <- "hello") println(c)

s.getBytes.foreach(println)

val result = "hello world".filter(_ != 'l')

"scala".drop(2).take(2).capitalize
