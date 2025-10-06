// Similar to data classes, which you learned about in the beginner tour,
// `data objects` automatically come with additional member functions:
// `toString()` and `equals()`

// Unlike data classes, data objects do not come automatically with the `copy()`
// member function because they only have a single instance that can't be
// copied

data object AppConfig {
    var appName: String = "My Application"
    var version: String = "1.0.0"
}

fun main() {
    println(AppConfig)
    println(AppConfig.appName)
}
