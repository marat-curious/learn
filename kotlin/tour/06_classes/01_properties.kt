fun main() {
    // To declare class, use the `class` keyword

    class Customer

    // Properties
 
    class Contact(val id: Int, var email: String)

    // or

    class ContactWithCategory(val id: Int, var email: String) {
        val category: String = ""
    }

    // The content contained within parenthses `()` is called the `class header`
    //
    // You can use a trailing comma when declaring class properties

    // Class properties can have default values

    class ContactWithDefault(val id: Int, var email: String = "example@gmail.com") {
        val category: String = "work"
    }
}
