fun printMessageWithPrefix(message: String, prefix: String) {
    println("[$prefix] $message")
}

fun main() {
    // uses named arguments with swapped parameter order
    printMessageWithPrefix(prefix = "Log", message = "Hello")
}
