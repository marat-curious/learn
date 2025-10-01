fun repeatN(n: Int, action: () -> Unit) {
    for (number in 1..n) {
        action()
    }
}

fun main() {
    repeatN(5) { println("Hello") }
}
