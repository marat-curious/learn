// Sometimes in your code, you may want to create small objects from classes
// and use them only briefly. This approach can have a performance impact.
// Inline value classes are a special type of class that avoids this
// performance impact. However, they can only contains values.

// An inline value class must have a single property initialized in the
// class header

@JvmInline
value class Email(val address: String)

fun sendEmail(email: Email) {
    println("Sending email to ${email.address}")
}

// By using an inline value class, you make the class inlined and can use it
// directly in your code without creating an object. This can significantly
// reduce memory footprint and improve you code's runtime performance

fun main() {
    val myEmail = Email("example@exaple.com")
    sendEmail(myEmail)
}
