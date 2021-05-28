val name = "Fred"
val age = 33
val weight = 200.00

// Using expressions in string leterals

println(s"$name is $age years old, and weighs $weight pounds.")

println(s"Age next year: ${age + 1}")

println(s"You are 33 years old: ${age == 33}")

case class Student(name: String, score: Int)

val hannah = Student("Hannah", 95)

println(s"${hannah.name} has a score of ${hannah.score}")

// The F string interpolator (printf stle formatting)

println(f"$name is $age years old, and weighs $weight%.2f pounds.")

println(f"$name is $age years old, and weighs $weight%.0f pounds.")

val out = f"$name, you weigh $weight%.0f pounds."

// The raw interpolator

s"foo\nbar"

raw"foo\nbar"

// Discussion (2.10 이전 버전 사용시)

val name = "Fred"
val age = 33

val s = "%s is %d years old".format(name, age)

println("%s is %d years old".format(name, age))
