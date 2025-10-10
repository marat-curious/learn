// Library authors may mark certain APIs as requiring opt-in before you can
// use them in your code. They usually do this when an API is still in
// development and may change in the future. If you don't opt in, you see
// warnings or errors like this:
// `This declaration needs opt-in. Its usage should be marked with '@...' or '@OptIn(...)'`

// To opt in, write `@OptIn` followed by parentheses containing the class name
// that categorizes the API, appended by two colons `::` and `class`

@OptIn(ExperimentalUnsignedTypes::class)
fun main() {
    val unsignedArray: UIntArray = uintArrayOf(1u, 2u, 3u, 4u, 5u)
    unsignedArray[2] = 42u
    println("Updated array: ${unsignedArray.joinToString()}")
}
