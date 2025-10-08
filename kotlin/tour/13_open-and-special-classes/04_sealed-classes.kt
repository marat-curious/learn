// Sealed classes are a special type of abstract class. Once you declare that
// a class is sealed, you can only create child classes from it within the
// same package. It's not possible to inherit from the sealed class outside
// of this scope

// Sealed classes are particularly useful when combined with a `when`
// expression. By using a `when` expression, you can define the behaviour
// for all possible child classes

sealed class Mammal(val name: String)

class Cat(val catName: String) : Mammal(catName)

class Human(val humanName: String, val job: String) : Mammal(humanName)

fun greetMammal(mammal: Mammal): String {
    when(mammal) {
        is Human -> return "Hello ${mammal.name}; You're working as a ${mammal.job}"
        is Cat -> return "Hello ${mammal.name}"
    }
}

fun main() {
    println(greetMammal(Cat("Showy")))
}
