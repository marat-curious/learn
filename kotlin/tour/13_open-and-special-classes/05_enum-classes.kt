// An enum class contains enum constants, which are themselves instances
// of the enum class

enum class State {
    IDLE, RUNNING, FINISHED
}

// Enum classes can have properties and member functions just like normal
// classes

enum class Color(val rgb: Int) {
    RED(0xFF0000),
    GREEN(0x00FF00),
    BLUE(0x0000FF),
    YELLOW(0xFFFF00);

    // To add a member function to this class, separate it from the enum
    // constants with a semicolon `;`

    fun containsRed() = (this.rgb and 0xFF0000 != 0)
}

fun main() {
    val state = State.RUNNING
    val message = when(state) {
        State.IDLE -> "It's idle"
        State.RUNNING -> "It's running"
        State.FINISHED -> "It's finished"
    }
    println(message)

    val red = Color.RED
    println(red.containsRed())
    println(Color.BLUE.containsRed())
    println(Color.YELLOW.containsRed())
}
