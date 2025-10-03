data class User(val id: Int, var email: String)

fun updateEmail(user: User, newEmail: String): User = user
    .apply { this.email = newEmail }
    .also { println("Updating email for user with ID: ${it.id}") }

fun main() {
    val user = User(1, "old_email@example.com")
    val updateUser = updateEmail(user, "new_email@example.com")
    println("Updated User: $updateUser")
}
