fun sendMessageToClient(
    client: Client?, message: String?, mailer: Mailer
) {
    if (client == null || message == null || client.personalInfo == null || client.personalInfo.email === null) {
        return
    }
    mailer.sendMessage(client.personalInfo.email, message)
}

class Client(val personalInfo: PersonalInfo?)
class PersonalInfo(val email: String?)
interface Mailer {
    fun sendMessage(email: String, message: String)
}
class M : Mailer {
    override fun sendMessage(email: String, message: String) {
        println("M.sendMessage: $email with $message")
    }
}

fun main() {
    val personalInfo = PersonalInfo("client@example.com")
    val client = Client(personalInfo)
    val mailer = M()
    sendMessageToClient(client, "Message", mailer);

}
