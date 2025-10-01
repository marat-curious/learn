fun uppercaseString(text: String): String {
    return text.uppercase()
}

fun main() {
    println(uppercaseString("hello"))

    // `uppercaseString` can also be written as a lambda expression

    val uppercaseStr = { text: String -> text.uppercase() }

    println(uppercaseStr("hello"))

    // If you declare a lambda without parameters,
    // then there is no need to use `->`

    { println("Log message") }
}
