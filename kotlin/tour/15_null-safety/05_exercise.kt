data class User(val name: String?)

fun getNotificationPreferences(user: Any, emailEnabled: Boolean, smsEnabled: Boolean): List<String> {
    val validUser = user as? User ?: return listOf<String>()
    val userName = validUser.name ?: "Guest"

    return listOfNotNull(
        "Email Notifications enabled for ${userName}".takeIf { emailEnabled },
        "SMS Notifications enabled for ${userName}".takeIf { smsEnabled }
    )
}

fun main() {
    val user1 = User("Alice")
    val user2 = User(null)
    val invalidUser = "NotAUser"

    println(getNotificationPreferences(user1, emailEnabled = true, smsEnabled = false))
    println(getNotificationPreferences(user2, emailEnabled = true, smsEnabled = true))
    println(getNotificationPreferences(invalidUser, emailEnabled = true, smsEnabled = true))
}
