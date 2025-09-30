// To create a read-only list (`List`), use the `listOf()` function
// To create a mutable list (`MutableList`), use the `mutableListOf()` function

fun main() {
    val readOnlyShapes = listOf("triangle", "square", "circle")
    println(readOnlyShapes)

    // Lists are ordered so to access an item in a list, use indexed access operator `[]`

    println("The first item in the list is: ${readOnlyShapes[0]}")

    // To get the first and last item in a list, use `.first()` and `.last()` function respectively

    println("The first item in the list is: ${readOnlyShapes.first()}")

    // To get the number of items in a list, use the `.count()` function

    println("The list has ${readOnlyShapes.count()} items")

    // To check that an item is in a list, use the `in` operator

    println("circle" in readOnlyShapes)

    val shapes: MutableList<String> = mutableListOf("triangle", "square", "circle")
    println(shapes)

    // To add or remove items from a mutable list, use `.add()` and `.remove()` function respectively

    shapes.add("pentagon")
    println(shapes)

    shapes.remove("pentagon")
    println(shapes)

    // To prevent unwanted modifications, you can craete a read-only view of
    // a mutable list by assigning it to `List`
    // This is also called "casting"

    val shapesLocked: List<String> = shapes
}
