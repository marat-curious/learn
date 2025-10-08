fun findOutOfStockBooks(inventory: List<Int>): List<Int> = buildList() {
    addAll(inventory.indices.filter { inventory[it] == 0 })
}

fun main() {
    val inventory = listOf(3, 0, 7, 0, 5)
    println(findOutOfStockBooks(inventory))
}
