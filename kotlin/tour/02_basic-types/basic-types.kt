// `+=`, `-=`, `*=`, `/=` and `%=` are augmented assignment operators

fun main() {
    var customers = 10

    customers = 8

    customers = customers + 3
    customers += 7
    customers -= 3
    customers *= 2
    customers /= 3

    println(customers)


    // Variable declared without initialization
    val d: Int
    d = 3

    // Variable explicitly typed and initialized
    val e: String = "hello"

    println(d)
    println(e)
}
