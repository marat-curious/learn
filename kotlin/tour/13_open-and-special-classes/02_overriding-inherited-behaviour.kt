// Member functions
// To allow a function in the parent class to be overridden, use the `open`
// keyword before its declaration in the parent class

// Properties
// In Kotlin, it's not common practice to make a property inheritable by using
// the `open` keyword and overriding it later. Most of the time, you use an
// abstract class or an interface where properties are inheritable by default

open class Vehicle(val make: String, val model: String) {
    open val transmissionType: String = "Manual"

    open fun displayInfo() {
        println("Vehicle Info: Make - $make, Model - $model")
    }
}

class Car(make: String, model: String, val numberOfDoors: Int) : Vehicle(make, model) {
    // However, this is not good practice. Instead, you can add the property
    // to the constructor of your inheritable class and declare  its value
    // when you create the `Car` child class:
    // 
    // open class Vehicle(val make: String, val model: String, val transmissionType: String = "Manual")
    // class Car(make: String, model: String, val numberOfDoors: Int) : Vehicle(make, model, "Automatic")

    open val transmissionType: String = "Automatic"

    override fun displayInfo() {
        println("Car Info: Make - $make, Model - $model, Number of doors - $numberOfDoors")
    }
}

fun main() {
    val car1 = Car("Toyota", "Corolla", 4)
    val car2 = Car("Honda", "Civic", 2)

    car1.displayInfo()
    car2.displayInfo()
}
