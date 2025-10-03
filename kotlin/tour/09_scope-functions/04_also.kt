// Use the `also` scope function to complete an additional action with
// an object and then return the object to continue using it in your code

// Since the `also` function returns the object, it is useful for not only
// logging but debugging, chaining multiple operations, and performing
// other side-effect operations that don't affect the main flow of your code

fun main() {
    val medals: List<String> = listOf("Gold", "Silver", "Bronze")
    val reversedLongUppercaseMedals: List<String> =
        medals
            .map { it.uppercase() }
            .also { println(it) }
            .filter { it.length > 4 }
            .also { println(it) }
            .reversed()
    println(reversedLongUppercaseMedals)
}
