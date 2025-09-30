// Every key in a map must be unique so that Kotlin can understand which value
// you want to get
// You can have dublicate values in a map
//
// To create a read-only map `Map`, use the `mapOf` function
// To create a mutable map `MutableMap`, use the `mutableMapOf` function

fun main() {
    // The easiest way to create maps is to use `to` between each key and its related value
    val readOnlyJuiceMenu = mapOf("apple" to 100, "kiwi" to 190, "orange" to 100)
    println(readOnlyJuiceMenu)

    val juiceMenu: MutableMap<String, Int> = mutableMapOf("apple" to 100, "kiwi" to 190, "orange" to 100)
    println(juiceMenu)

    // To access a value in a map, use the indexed access operator `[]` with its key
    println("The value of apple juice is: ${readOnlyJuiceMenu["apple"]}")

    // If you try to access a key-value pair with a key that doesn't exist
    // in a map, you see a `null` value
    println("The value of pineapple juice is: ${readOnlyJuiceMenu["pineapple"]}")

    // To prevent unwanted modifications, you can create a read-only view of
    // a muteable map by assign it to a `Map`

    val juiceMenuLocked: Map<String, Int> = juiceMenu

    // You can also use the indexed access operator `[]` to add items to a mutable map
    juiceMenu["coconut"] = 150
    println(juiceMenu)

    // To remove items from a mutable map, use the `.remove()` function
    juiceMenu.remove("orange")
    println(juiceMenu)

    // To get the number of items in a map, use the `.count()` function
    println("This map has ${readOnlyJuiceMenu.count()} key-value pairs")

    // To check if a specific key is already included in a map, use the
    // `.containsKey()` function
    println(readOnlyJuiceMenu.containsKey("kiwi"))

    // To obtain a collection of the keys or values of a map, use the
    // `keys` and `values` properties respectively
    println(readOnlyJuiceMenu.keys)
    println(readOnlyJuiceMenu.values)

    // `keys` and `values` are examples of "properties" of an object.
    // To access the property of an object, write the property name after
    // the object appended with a period `.`

    // To check that a key or value is in a map, use the `in` operator
    println("orange" in readOnlyJuiceMenu.keys)
    // Alternatively, you don't need to use the keys property
    println("orange" in readOnlyJuiceMenu)

    println(200 in readOnlyJuiceMenu.values)
}
