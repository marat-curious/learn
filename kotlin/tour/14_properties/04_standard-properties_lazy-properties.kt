// To initialize a property only when it's first accessed, use a lazy property.
// The standart library provides the `Lazy` interface for delegation.

// To create an instance of the `Lazy` interface, use the `lazy()` function
// by providing it with a lambda expression to execute when the `get()` function
// is called for the first time. Any further calls of the `get()` function
// return the same result that was provided on the first call. Lazy properties
// use the trailing lammbda syntax to pass the lambda expression

class Database {
    fun connect() {
        println("Connecting to the database...")
    }

    fun query(sql: String): List<String> {
        return listOf("Data 1", "Data 2", "Data 3")
    }
}

val databaseConnection: Database by lazy {
    val db = Database()
    db.connect()
    db
}

fun fetchData() {
    val data = databaseConnection.query("SELECT * FROM data")
    println("Data: $data")
}

fun main() {
    fetchData()
    fetchData()
}
