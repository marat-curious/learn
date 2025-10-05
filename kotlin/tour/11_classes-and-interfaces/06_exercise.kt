interface Refundable {
    fun refund(amount: Double)
}

abstract class PaymentMethod(val name: String) {
    fun authorize(amount: Double) {
        println("Authorizing payment of $$amount")
    }

    abstract fun processPayment(amount: Double)
}

class CreditCard(name: String) : Refundable, PaymentMethod(name) {
    override fun refund(amount: Double) {
        println("Refunding $$amount to the credit card.")
    }

    override fun processPayment(amount: Double) {
        println("Processing credit card payment of $$amount")
    }
}

fun main() {
    val visa = CreditCard("Visa")

    visa.authorize(100.0)
    visa.processPayment(100.0)
    visa.refund(50.0)
}
