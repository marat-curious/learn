fun Shop.getSetOfCustomers(): Set<Customer> = customers.toSet()

fun main() {
    println(Shop("Test Shop", listOf(Customer("Test Costomer", City("Test City"), listOf(Order(listOf(Product("Test Product", 42.0)), true))))))
}
