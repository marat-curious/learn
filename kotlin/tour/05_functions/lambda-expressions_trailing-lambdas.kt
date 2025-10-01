fun main() {
    // As you have seen, if a lambda expression is the only function parameter
    // you can drop the function parentheses `()`. If a lambda expression is
    // passed as the last parameter of a function, then the expression can be
    // written outside the function parentheses `()`.
    // In both cases, the syntax is called a `trailing lambda`

    // the `.fold()` function accepts an initial value and an operation
 
    println(listOf(1, 2, 3).fold(0, { x, item -> x + item }))

    // Alternatively, in the form of a trailing lambda

    println(listOf(1, 2, 3).fold(0) { x, item -> x + item })
}
