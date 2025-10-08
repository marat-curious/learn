// To create a class that inherits from another, add a colon after you class
// header followed by a call to the constructor of the parent class that you
// want to inherit from

// Just like when creating a normal class instance, if you class inherits from
// a parent class, then it must initialize all the parameters declared in the
// parent class header

open class Vehicle(val make: String, val model: String)

class Car(make: String, model: String, val numberOfDoors: Int): Vehicle(make, model)

fun main() {
    val car = Car("Toyota", "Corolla", 4)
    println("Car Info: Make - ${car.make}, Model - ${car.model}, Number of doors - ${car.numberOfDoors}")
}
