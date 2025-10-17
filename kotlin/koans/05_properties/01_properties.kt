class PropertyExample() {
    var counter = 0
    var propertyWithCounter: Int? = null
        set(value) {
            field = value
            counter++
        }
}

fun main() {
    val property = PropertyExample()
    property.propertyWithCounter = 1
    property.propertyWithCounter = 2
    println(property.counter)
}
