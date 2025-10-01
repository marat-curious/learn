fun main() {
    val numbers = listOf(1, -2, 3, -4, 5, -6)

    // `.filter()` function to filter items in collection

    val positives = numbers.filter({ x -> x > 0 })

    val isNegative = { x: Int -> x < 0 }
    val negatives = numbers.filter(isNegative)

    // If a lambda expression is the only function parameter,
    // you can drop the function parantheses `()`:
    // val negatives = numbers.filter { x -> x < 0 }

    println(positives)
    println(negatives)

    // `.map()` function to transform items in collection

    val doubled = numbers.map { x -> x * 2}

    val isTripled = { x: Int -> x * 3 }
    val tripled = numbers.map(isTripled)

    println(doubled)
    println(tripled)
}
