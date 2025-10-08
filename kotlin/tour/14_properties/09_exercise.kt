import kotlin.properties.Delegates.observable

class Budget(val totalBudget: Int) {
    var remainingBudget: Int by observable(totalBudget) {
        _, old, new -> when {
            (new < totalBudget * 0.2) -> println("Warning: You remaining budget ($new) is below 20% of your total budget")
            (new > old) -> println("Good news: Your remaining budget increasing to $new")
        }
    }
}

fun main() {
    val myBudget = Budget(totalBudget = 1000)
    myBudget.remainingBudget = 800
    myBudget.remainingBudget = 150
    myBudget.remainingBudget = 50
    myBudget.remainingBudget = 300
}
