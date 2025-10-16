// Make the function `joinOptions()` return the list in a JSON format
// (for example, `[a, b, c]`) by specifying only two arguments

// The library function `joinToString()` is declared with default values
// for parameters:
// 
// fun joinToString(
//     separator: String = ", ",
//     prefix: String = "",
//     postfix: String = "",
//     /* ... */
// ): String

fun joinOptions(options: Collection<String>) =
    options.joinToString(prefix = "[", postfix = "]")

fun main() {
    println(joinOptions(listOf("a", "b", "c")))
}
