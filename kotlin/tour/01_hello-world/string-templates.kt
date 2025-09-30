// A string value is a sequence of characters in double quotes `"`
// Template expressions always start with a dollar sign `$`

fun main() {
    val customers = 10
    println("There are $customers customers")
    println("There are ${customers + 1} customers");
}
