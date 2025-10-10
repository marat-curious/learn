fun main() {
    // To explicitly cast an object to any other type, use the `as` operator.
    // This includes casting from a nullable type to its non-nullable counterpart.
    // If the cast isn't possible, the program crashes "at runtime".
    // This is why it's called the "unsafe" cast operator

    val a: String? = null
    val b = a as String

    // java.lang.NullPointerException: null cannot be cast to non-null type kotlin.String
    // println(b)

    // to explicitly cast an object to a non-nullable type, but return `null`
    // instead of throwing an error on failure, use the `as?` operator. Since
    // the `as?` operator doesn't trigger an error on failure, it is called
    // the "safe" operator

    val c = a as? String
    println(c)
}
