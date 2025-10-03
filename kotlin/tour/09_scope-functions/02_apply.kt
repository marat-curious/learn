// Use the `apply` scope function to initialize objects, like a class instance,
// at the time of creation rather than later on in your code

class Client() {
    var token: String? = null
    fun connect() = println("connected!")
    fun authenticate() = println("authenticated!")
    fun getData(): String = "Mock data"
}

val client = Client()

// `apply` scope function creates a temporary scope so that you don't have to
// explicitly refer to the `client` instance when accessing its properties or
// functions
// Lambda expression passed to the `apply` scope function that update the
// `token` property and calls the `connect()` and `authenticate()` functions
val clientAnother = Client().apply {
    token = "asdf"
    connect()
    authenticate()
}

fun main() {
    client.token = "asdf"
    client.connect()
    client.authenticate()
    client.getData()

    clientAnother.getData()
}
