data class Position(
    val x: Int,
    val y: Int
)

data class ButtonEvent(
    val isRightClick: Boolean,
    val amount: Int,
    val position: Position
)

class Button {
    fun onEvent(action: ButtonEvent.() -> Unit) {
        val event = ButtonEvent(isRightClick = false, amount = 2, position = Position(100, 200))
        event.action()
    }
}

fun main() {
    val button = Button()
    button.onEvent {
        if (!isRightClick && amount == 2) {
            println("Double click!")
        }
    }
}
