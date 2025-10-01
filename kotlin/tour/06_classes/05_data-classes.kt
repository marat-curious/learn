// To declare a `data class` use keyword `data`

data class User(val name: String, val id: Int)

fun main() {
    // Print as string

    val user = User("Alex", 1)

    // To print a readable string of a class instance, you can explicitly call
    // the `toString()` function, or use print functions which automatically
    // call `toString()`

    println(user)

    // Compare instances
    // To compare data class instances, use the equality operator `==`

    val secondUser = User("Alex", 1)
    val thirdUser = User("Max", 2)

    println("user == secondUser: ${user == secondUser}")
    println("user == thirdUser: ${user == thirdUser}")

    // Copy instance
    // To create an exact copy of a data class instance, call the `copy()`
    // function on the instance

    println(user.copy())
    println(user.copy("Max"))
    println(user.copy(id = 3))
}
