// Use the `let` scope function when you want to perform `null` checks in your
// code and later perform further actions with the returned object

fun sendNotification(recipientAddress: String): String {
    println("Yo $recipientAddress!")
    return "Notification sent!"
}

fun getNextAddress(): String {
    return "sebastian@jetbrains.com"
}

fun main() {
    val address: String? = getNextAddress()
    // error: argument type mismatch: actual type is 'String?', but 'String' was expected.
    // sendNotification(address)

    // `let` scope function creates a temporary scope and passes the
    // `sendNotification()` function as a lambda expression into the `let` scope
    // function
    val confirm = address?.let {
        // Refers to the `address` variable via `it`, using a temporary scope
        sendNotification(it)
    }

    println(confirm)
}
