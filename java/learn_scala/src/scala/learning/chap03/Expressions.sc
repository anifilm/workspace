// Expressions

"hello"
"hel" + 'l' + "o"


// Expression Blocks

val x = 5 * 20; val amount = x + 10

val amount = { val x = 5 * 20; x + 10 }

val amount = {
  val x = 5 * 20
  x + 10
}

{ val a = 1; { val b = a * 2; { val c = b + 4; c } } }


// Statements

val x = 1


// If Expressions

if (47 % 3 > 0) println("Not a muliple of 3")

val result = if (false) "what does this return?"

// If-Else Expressions

val x = 10; val y = 20

val max = if (x > y) x else y


// Match Expressions

val x = 10; val y = 20

val max = x > y match {
  case true => x
  case false => y
}

val status = 500

val message = status match {
  case 200 =>
    "ok"
  case 400 => {
    println("ERROR - we called the service incorrectly")
    "error"
  }
  case 500 => {
    println("ERROR - the service encountered an error")
    "error"
  }
}

val day = "MON"

val kind = day match {
  case "MON" | "TUE" | "WED" | "THU" | "FRI" =>
    "weekday"
  case "SAT" | "SUN" =>
    "weekend"
}

//"match me" match { case "nope" => "sorry" }

// Matching with Wildcard Patterns

val message = "Ok"

val status = message match {
  case "Ok" => 200
  case other => {
    println(s"Couldn't parse $other")
    -1
  }
}

val message = "Unauthorized"

val status = message match {
  case "Ok" => 200
  case _ => {
    println(s"Couldn't parse $message")
    -1
  }
}

// Matching with Pattern Guards

val response: String = null

response match {
  case s if s != null => println(s"Received '$s''")
  case s => println("Error! Received a null response")
}

// Matching Types with Pattern Variables

val x: Int = 12180
val y: Any = x

y match {
  case x: String => s"'x'"
  case x: Double => f"$x%.2f"
  case x: Float => f"$x%.2f"
  case x: Long => s"${x}L"
  case x: Int => s"${x}i"
}


// Loops

for (x <- 1 to 7) { println(s"Day $x:") }

val res0 = for (x <- 1 to 7) yield { s"Day $x:" }

for (day <- res0) print(day + ", ")


// Iterator Guards

val threes = for (i <- 1 to 20 if i % 3 == 0) yield i

val quote = "Faith,Hope,,Charity"

for {
  t <- quote.split(",")
  if t != null
  if t.size > 0
}
{ println(t) }


// Nested Iterators

for { x <- 1 to 2
      y <- 1 to 3 }
{ print(s"($x, $y) ") }


// Value Binding

val powersOf2 = for (i <- 0 to 8; pow = 1 << i) yield pow


// Whild and Do/While Loops

var x = 10; while (x > 0) x -= 1

val x = 0

do println(s"Here I am, x = $x") while (x > 0)
