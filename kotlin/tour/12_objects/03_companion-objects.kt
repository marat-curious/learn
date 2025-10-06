// In Kotlin, a class can have an object: a `companion` object. You can only
// have `one` companion object per class. A companion object is created only
// when its class is referenced for the first time.

// Any properties of functions declared inside a companion object are shared
// across all class instances

// A companion object doesn't have to have a name. If you don't define one,
// the default is `Companion`

class BigBen {
    companion object Bonger {
        fun getBongs(nTimes: Int) {
            repeat(nTimes) {
                print("BONG ")
            }
        }
    }
}

fun main() {
    // Companion object is created when the class is referenced for the first time
    BigBen.getBongs(12)
}
