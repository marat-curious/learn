interface  Vehicle {
    val name: String
    fun move(): String
}

object FlyingSkateboard : Vehicle {
    override val name = "Flying Skakeboard"
    override fun move(): String = "Glides through the air with a hover engine"
    fun fly(): String = "Wooooooooo"
}

fun main() {
    println("${FlyingSkateboard.name}: ${FlyingSkateboard.move()}")
    println("${FlyingSkateboard.name}: ${FlyingSkateboard.fly()}")
}
