// Similar to `apply`, you can use `run` scope function to initialize an
// object, but it's better to use `run` to initalize an object at a specific
// moment in your code and immediately compute a result

class Client() {
    var token: String? = null
    fun connect() = println("connected!")
    fun authenticate() = println("authenticated!")
    fun getData(): String = "Mock data"
}

val client: Client = Client().apply {
    token = "asdf"
}

fun main() {
    // Creates a temporary scope within the `run` scope function so that you
    // don't have to explicitly refer to the `client` instance when accessing
    // its properties or functions
    // Passes a lambda expression to the `run` scope function that calls the
    // `connect()`, `authenticate()` and `getData()` functions
    val result: String = client.run {
        connect()
        authenticate()
        getData()
    }

    println(result)
}
