// When you use the assignment operator `=`, Kotlin uses type inference,
// so you can also omit the return type

fun sum(x: Int, y: Int) = x + y

// If you use `{}` curly braces to declare your function body, you must
// declare the return type unless it is the `Unit` type

fun main() {
    println(sum(1, 2))
}
