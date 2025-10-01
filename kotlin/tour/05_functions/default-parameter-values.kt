fun printMessageWithPrefix(message: String, prefix: String = "Info") {
    println("[$prefix] $message")
}

// You can skip specific parameters with default values, rather than omitting
// them all. However, after the first skipped parameter, you must name all
// subsequent parameters

fun main() {
    // Function called with both parameters
    printMessageWithPrefix("Hello", "Log")

    // Function called only with message parameter
    printMessageWithPrefix("Hello")

    printMessageWithPrefix(prefix = "Log", message = "Hello")
}
