fun main() {
    // if
    val d: Int
    val check = true

    if (check) {
        d = 1
    } else {
        d = 2
    }

    println(d)

    // if can be used as an expression

    val a = 1
    val b = 2

    println(if (a > b) a else b)
}
