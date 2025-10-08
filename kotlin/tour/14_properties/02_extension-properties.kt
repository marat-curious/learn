// Extension properties allow you to add new properties to existing classes
// without modifying their source code. However, extension properties in
// Kotlin do not have backing fields.

// To declare an extension property, write the name of the class that you want
// to extend followed by a `.` and the name of your property.
// Example: var String.lastChar: Char

// Extension properties can't override existing properties of a class

data class Person(val firstName: String, val lastName: String)

// Extension property to get the full name
val Person.fullName: String
    get() = "$firstName $lastName"

fun main() {
    val person = Person(firstName = "John", lastName = "Doe")
    println(person.fullName)
}
