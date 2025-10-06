// In Kotlin, you can use `object declarations` to declare a class with
// a single instance. In a sense, you declare the class and create the single
// instance at the same time. Object declarations are useful when you want
// to create a class to use as a single reference point for your program or
// to coordinate behaviour across a system.

// Objects in Kotlin are `lazy`, meaning they are created only when accessed.
// Kotlin also ensures that all objects are created in a thread-safe manner
// so that you don't have to check this manually

// Objects can't have constructors, so they don't have headers like classes

interface Auth {
    fun takeParams(username: String, password: String)
}

// Objects can inherit from classes and interfaces

object DoAuth : Auth {
    override fun takeParams(username: String, password: String) {
        println("input Auth parameters = $username:$password")
    }
}

fun main() {
    // The object is created when the takeParams() function is called
    DoAuth.takeParams("coding_ninja", "N1njaC0ding!")
}
