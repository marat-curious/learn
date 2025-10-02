// You can provide a default value to return if a `null` value is detected
// by using Elvis operator `?:`

// Write on the left-hand side of the Elvis operator what should be checked
// for a `null` value.
// Write on the right-hand side of the Elvis operator what should be returned
// if a `null` value is detected

fun main() {
    val nullString: String? = null
    println(nullString?.length ?: 0)
}
