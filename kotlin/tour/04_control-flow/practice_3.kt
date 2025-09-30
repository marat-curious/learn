fun main() {
    var pizzaSlices = 0

    while (pizzaSlices < 7) {
        pizzaSlices++
        println("There's only $pizzaSlices slice/s of pizza :(")
    }
    pizzaSlices++;

    println("There are $pizzaSlices slices of pizza. Hooray! We have a whole pizza! :D")

    pizzaSlices = 0

    pizzaSlices++
    do {
        println("There's only $pizzaSlices slice/s of pizza :(")
        pizzaSlices++
    } while(pizzaSlices < 8)

    println("There are $pizzaSlices slices of pizza. Hooray! We have a whole pizza! :D")
}
