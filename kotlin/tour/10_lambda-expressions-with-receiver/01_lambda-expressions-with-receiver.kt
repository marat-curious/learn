// The syntax for a lambda expression with receiver is different when you
// define the function type. First write receiver that you want to extend.
// Next, put a `.` and then complete the rest of your function type definition
// example: MutableList<Int>.() -> Unit

class Canvas {
    fun drawCircle() = println("Drawing a circle")
    fun drawSquare() = println("Drawing a square")
}

// The `block` parameter is a lambda expression with receiver, where the
// `Canvas` class is the receiver
// The `render` function creates an instance of the `Canvas` class and calls
// the `block()` lambda expression on the `canvas` instance, using is as
// the receiver

fun render(block: Canvas.() -> Unit): Canvas {
    val canvas = Canvas()
    canvas.block()
    return canvas
}

fun main() {
    render {
        drawCircle()
        drawSquare()
    }
}
