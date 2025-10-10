data class User(
    val id: Int,
    val name: String,
    val friends: List<Int>
)

fun getNumberOfFriends(users: Map<Int, User>, userId: Int): Int {
    val user = users[userId] ?: return -1
    return user.friends.size
}

fun main() {
    val user1 = User(1, "Alice", listOf(2, 3))
    val user2 = User(2, "Bob", listOf(1))
    val user3 = User(3, "Charlie", listOf(1))
    val users = mapOf(
        1 to user1,
        2 to user2,
        3 to user3
    )

    println(getNumberOfFriends(users, 1))
    println(getNumberOfFriends(users, 2))
    println(getNumberOfFriends(users, 4))
}
