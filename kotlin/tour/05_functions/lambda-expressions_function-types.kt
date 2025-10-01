val upperCaseString: (String) -> String = { text -> text.uppercase() }

// If your lambda expression has no parameters then the parantheses `()`
// are left empty, example: `() -> Unit`
//
// You must declare parameter and return types either in the lambda
// expression or as a function type. Otherwise, the compiler won't
// be able to know what type your expression

fun main() {
    println(upperCaseString("hello"))
}
