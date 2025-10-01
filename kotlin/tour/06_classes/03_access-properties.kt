class Contact(val id: Int, var email: String)

fun main() {
    val contact = Contact(1, "mary@gmail.com")
    println(contact.email)

    contact.email = "jane@gmail.com"
    println(contact.email)
}
