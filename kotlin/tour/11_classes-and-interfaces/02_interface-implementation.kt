// Interfaces support multiple inheritance so a class can implement multiple
// interfaces at once. First, let's consider the scenario where a class
// implements `one` interface.

// To create a class that implements an interface, add a colon after you class
// header, followed by the interface name that you want implement. You don't
// use parentheses `()` after the interface name because interfaces don't
// have a constructor.

interface PaymentMethod {
    // Functions are inheritable by default
    fun initiatePayment(amount: Double): String
}

interface PaymentType {
    val paymentType: String
}

class CreditCardPayment(val cardNumber: String, val cardHolderName: String, val expiryDate: String): PaymentMethod, PaymentType {
    override fun initiatePayment(amount: Double): String {
        return "Payment of $$amount initiated using Credit Card ending in ${cardNumber.takeLast(4)}"
    }

    override val paymentType: String = "Credit Card"
}

fun main() {
    val paymentMethod = CreditCardPayment("1234 5678 9012 3456", "John Doe", "12/25")
    println(paymentMethod.initiatePayment(100.0))

    println("Payment is by ${paymentMethod.paymentType}")
}
