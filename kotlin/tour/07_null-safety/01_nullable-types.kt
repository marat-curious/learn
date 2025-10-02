fun main() {
    var neverNull: String = "This can't be null"

    // Throws a compiler error
    neverNull = null

    var nullable: String? = "You can keep a null here"

    // This is OK
    nullable = null

    // By default, `null` values aren't accepted
    var inferredNull = "The compiller assumes non-nullable"

    // Throws a compiller error
    inferredNull = null

    fun strLength(notNull: String): Int {
        return notNull.length
    }

    println(strLength(neverNull))

    // Throws a compiller error
    println(strLength(nullable))
}
