val registeredUsernames = mutableListOf("john_doe", "jane_smith")
val registeredEmails = mutableListOf("john@examle.com", "jane@example.com")

fun registerUser(username: String, email: String): String {
    if (username in registeredUsernames) {
        return "Username already taken. Please choose a different username."
    }

    if (email in registeredEmails) {
        return "Email already registered. Please use a different email."
    }

    registeredUsernames.add(username);
    registeredEmails.add(email)

    return "User registered successfully: $username"
}

fun main() {
    println(registerUser("john_doe", "newjohn@example.com"))
    println(registerUser("new_user", "newuser@example.com"))
}
