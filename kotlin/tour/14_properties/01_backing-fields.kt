// In Kotlin, properties have default `get()` and `set()` functions, known as
// property accessors, which handle retrieving and modifying their values.
// The accessors use a `backing field` to store the actual property value

// Baking fields exists if either of the following is `true`:
// - you use the default `get()` and `set()` functions for the property
// - you try to access the property value in code by using the `field` keyword

class Contact(val id: Int, var email: String) {
    var category: String = ""
}

// under the hood, this is equivalent to this pseudocode:
// class Contact(val id: Int, var email: String) {
//    var category: String = ""
//        get() = field
//        set(value) {
//            field = value
//        }
// }

class Person {
    var name: String = ""
        set(value) {
            // This causes a runtime error:
            // Expection in thread "main" java.lang.StackOverflowError
            // name = value.replaceFirstChar { firstChar -> firstChar.uppercase() }
            field = value.replaceFirstChar { firstChar -> firstChar.uppercase() }
        }
}

fun main() {
    val person = Person()
    person.name = "kodee"
    println(person.name)
}
