"hello world".split(" ")

"hello world".split(" ").foreach(println)

val s = "eggs, milk, butter, Coco Puffs"

// 1st attempt
s.split(",")

// 2nd attempt, cleaned up
s.split(",").map(_.trim)

"hello world, this is Al".split("\\s+")

// split with a String argument
"hello world".split(" ")

// split with a Char argument
"hello world".split(' ')
