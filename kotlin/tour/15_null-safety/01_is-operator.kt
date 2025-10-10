// For check if an object has a certain type you can use `is` and `!is`
// operations with `when` or `if` conditional expressions:
// - `is` checks if the object has the type and returns a boolean value
// - `!is` checks if the object doesn't have type and returns a boolean value

fun printObjectType(obj: Any) {
    when(obj) {
        is Int -> println("It's an Integer with value $obj")
        !is Double -> println("It's NOT a Double")
        else -> println("Unknown type")
    }
}

fun main() {
    val myInt = 42
    val myDouble = 3.14
    val myList = listOf(1, 2, 3)

    printObjectType(myInt)
    printObjectType(myDouble)
    printObjectType(myList)
}
