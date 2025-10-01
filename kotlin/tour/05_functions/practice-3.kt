fun intervalInSecords(hours: Int = 0, minutes: Int = 0, seconds: Int = 0): Int = ((hours * 60) + minutes) * 60 + seconds

fun main() {
    println(intervalInSecords(hours = 1, minutes = 20, seconds = 15))
    println(intervalInSecords(minutes = 1, seconds = 25))
    println(intervalInSecords(hours = 2))
    println(intervalInSecords(minutes = 10))
    println(intervalInSecords(hours = 1, seconds = 1))
}
