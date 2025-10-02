// To safely access properties of an object that might contain a `null`
// value, use safe call operator `?.`

fun lengthString(maybeString: String?): Int? = maybeString?.length

fun main() {
    val nullString: String? = null
    println(lengthString(nullString))

    // The safe call operator can also be used to safety call an extension
    // or member function. In this case, a `null` check is performed before
    // the function call. If check detects a `null` value, then the call
    // is skipped and `null` is returned

    println(nullString?.uppercase())
}
