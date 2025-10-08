// You can create a class that inherits a class and implements multiple
// interfaces. In this case, you must declare the parent class first,
// after the colon, before listing the interfaces

interface EcoFriendly {
    val emissionLevel: String
}

interface ElectricVehicle {
    val batteryCapacity: Double
}

open class Vehicle(val make: String, val model: String)

open class Car(make: String, model: String, val numberOfDoors: Int) : Vehicle(make, model)

class ElectricCar(
    make: String,
    model: String,
    numberOfDoors: Int,
    val capacity: Double,
    val emission: String
) : Car(make, model, numberOfDoors), EcoFriendly, ElectricVehicle {
    override val batteryCapacity: Double = capacity
    override val emissionLevel: String = emission
}
