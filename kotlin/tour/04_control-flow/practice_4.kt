fun main() {
    for (n in 1..100) {
        println(
            when {
                n % 3 == 0 && n % 5 == 0 -> "fizzbuzz"
                n % 3 == 0 -> "fizz"
                n % 5 == 0 -> "buzz"
                else -> "$n"
            }
        )
    }
}
