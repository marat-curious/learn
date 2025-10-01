fun main() {
    // Lambda expressions can be invoked on their own by adding parentheses `()`
    // after the curly braces `{}` and including any parameters within
    // the parentheses

    println({ text: String -> text.uppercase() }("hello"))
}
