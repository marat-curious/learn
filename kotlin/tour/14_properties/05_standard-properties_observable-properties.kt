// To create an observable property, you must first import
// `kotlin.properties.Delegates.observable`. Then, use the `observable()`
// function and provide it with lambda expression to execute whenever the
// property changes. Just like with lazy properties, observable properties
// use the trailing lambda syntax to pass the lambda expression

import kotlin.properties.Delegates.observable

class Thermostat {
    var temperature: Double by observable(20.0) { _, old, new ->
        if (new > 25) {
            println("Warning: Temperature is too high! ($old°C -> $new°C)")
        } else {
            println("Temperature updated: $old°C -> $new°C")
        }
    }
}

fun main() {
    val thermostat = Thermostat()
    thermostat.temperature = 22.5
    thermostat.temperature = 27.0
}
