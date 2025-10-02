// To create an extension function, write the name of the class that you want
// to extend followed by a `.` and the name of your function. Continue with
// the rest of the function declaration, including its arguments and return
// type

// The receiver is accessed inside the function body by the keyword: `this`

fun String.bold(): String = "<b>$this</b>"

fun main() {
    // "hello" is the receiver
    println("hello".bold())
}
