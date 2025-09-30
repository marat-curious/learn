fun main() {
    // while
    var cakesEaten = 0
    while (cakesEaten < 3) {
        println("Eat a cake")
        cakesEaten++
    }

    println()

    // do-while
    var cakesBaked = 0
    do {
        println("Bake a cake")
        cakesBaked++
    } while(cakesBaked < cakesEaten)
}
