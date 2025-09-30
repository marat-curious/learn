// To create a read-only `Set` use the `setOf` function
// To create a mutable set `MutableSet` use the `mutableSetOf` function
//
// As a set are `unordered` you can't access an item by a particular index

fun main() {
    val readOnlyFruit = setOf("apple", "banana", "cherry", "cherry")
    val fruit: MutableSet<String> = mutableSetOf("apple", "banana", "cherry", "cherry")

    println(readOnlyFruit)

    // To get the number of items in a set, use the `.count()` function

    println("This set has ${readOnlyFruit.count()} items")

    // To check that an item is in a set, use the `in` operator

    println("banana" in readOnlyFruit)

    // To add or remove items from a mutable set, use `.add()` and `.remove()` functions
    // respectively

    fruit.add("dragonfruit")
    println(fruit)

    fruit.remove("dragonfruit")
    println(fruit)

    // To prevent unwanted modifications, you can create a read-only view of a mutable
    // set by passing it to a `Set`

    val fruitLocked: Set<String> = fruit
}
