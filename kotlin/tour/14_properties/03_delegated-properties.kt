// Every object you `delegate` to must have a `getValue()` operator function,
// which Kotlin uses to retrieve the value of the delegated property. If the
// property is mutable, it must also have a `setValue()` operator function
// for Kotlin to set its value

// By default, the `getValue()` and `setValue()` functions have the following
// construction:
// operator fun getValue(thisRef: Any?, property: KProperty<*>): String {}
// operator fun setValue(thisRef: Any?, property: KProperty<*>, value: String) {}

class CachedStringDelegate {
    var cachedValue: String? = null

    operator fun getValue(thisRef: User, property: Any?): String {
        if (cachedValue == null) {
            cachedValue = "${thisRef.firstName} ${thisRef.lastName}"
            println("Computed and cached: $cachedValue")
        } else {
            println("Accessed from cache: $cachedValue")
        }
        return cachedValue ?: "Unknown"
    }
}

class User(val firstName: String, val lastName: String) {
    val displayName: String by CachedStringDelegate()
}

fun main() {
    val user = User("John", "Doe")
    println(user.displayName)
    println(user.displayName)
}
