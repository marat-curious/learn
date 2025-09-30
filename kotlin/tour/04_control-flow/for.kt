fun main() {
    // for
    for (number in 1..5) {
        print(number)
    }

    println()

    // with collections
    val cakes = listOf("carrot", "cheese", "chocolate")

    for (cake in cakes) {
        println("Yummy, it's a $cake cake!")
    }
}
