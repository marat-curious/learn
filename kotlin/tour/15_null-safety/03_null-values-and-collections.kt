fun main() {
    // To filter `null` value from a list, use the `filterNotNull()` function

    val emails: List<String?> = listOf("alice@example.com", null, "bob@example.com")
    val validEmails = emails.filterNotNull()
    println(validEmails)

    // If you want to perform filtering of `null` values directly when creating
    // a list, use the `listOfNotNull()` function

    val serverConfig = mapOf(
        "appConfig.json" to "App Configuration",
        "dbConfig.json" to "Database Configuration"
    )

    val requestedFile = "appConfig.json"
    val configFiles = listOfNotNull(serverConfig[requestedFile])

    println(configFiles)

    // Kotlin also provides functions that you can use to find values in
    // collections. If a value isn't found, they return `null` values instead
    // of triggering an error

    val temperatures = listOf(15, 18, 21, 21, 19, 17, 16)

    val maxTemperature = temperatures.maxOrNull()
    println("Highest temperature recorded: ${maxTemperature ?: "No data"}")

    val minTemperature = temperatures.minOrNull()
    println("Lowest temperature recorded: ${minTemperature ?: "No data"}")

    // You can use the `singleOrNull()` function with a lambda expression to
    // find a single item that matches a condition. If one doesn't exist or
    // there are multiple items that match, the function returns a `null`
    // value

    val singleHotDay = temperatures.singleOrNull { it == 30 }
    println("Single hot day with 30 degrees: ${singleHotDay ?: "None"}")

    // To transform a collection with a lambda expression and return the
    // first value that isn't `null`, use the `firstNotNullOfOrNull()` function
    // If no such value exists, the function returns a `null` value

    data class User(val name: String?, val age: Int?)

    val users = listOf(
        User(null, 25),
        User("Alice", null),
        User("Bod", 30)
    )

    val firstNonNullName = users.firstNotNullOfOrNull { it.name }
    println(firstNonNullName)

    // To use a lambda expression to process each collection item sequentially
    // and create an accumulated value (or return a `null` value if the
    // collection is empty) use the `reduceOrNull()` function

    val itemPrices = listOf(20, 35, 15, 40, 10)
    val totalPrice = itemPrices.reduceOrNull { runningTotal, price -> runningTotal + price }
    println("Total price of items in the cart: ${totalPrice ?: "No items"}")

    val emptyCart = listOf<Int>()
    val emptyTotalPrice = emptyCart.reduceOrNull { runningTotal, price -> runningTotal + price }
    println("Total price of items in the empty cart: ${emptyTotalPrice ?: "No items"}")
}
