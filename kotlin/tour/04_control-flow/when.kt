fun main() {
    // when
    // use `when` when you have a conditional expression with multiple branches

    val obj = "Hello"

    // Note that all branch conditions are checked sequentially until one
    // of them is satisfied. So only the first suitable branch is executed

    when (obj) {
        "1" -> println("One")
        "Hello" -> println("Greeting")
        else -> println("Unknown")
    }

    // when as an expression
    val result = when (obj) {
        "1" -> "One"
        "Hello" -> "Greeting"
        else -> "Unknown"
    }

    println(result)

    // when can also be used without a subject
    // this example uses `when` expression without a subject to check a chain
    // of Boolean expressions

    val trafficLightState = "Red"
    val trafficAction = when {
        trafficLightState == "Green" -> "Go"
        trafficLightState == "Yellow" -> "Slow down"
        trafficLightState == "Red" -> "Stop"
        else -> "Malfunction"
    }

    println(trafficAction)

    // you can have the same code but with `trafficLightState` as the subject

    val trafficAction_ = when (trafficLightState) {
        "Green" -> "Go"
        "Yellow" -> "Slow down"
        "Red" -> "Stop"
        else -> "Malfunction"
    }

    println(trafficAction)
}
