data class HttpResponse(val response: String)

class HttpClient {
    fun request(method: String, url: String, headers: Map<String, String>): HttpResponse {
        println("Requesting $method to $url with headers: $headers")
        return HttpResponse("Response from $url")
    }
}

fun HttpClient.get(url: String): HttpResponse = request("GET", url, emptyMap())

fun main() {
    val client = HttpClient()

    val getResponseWithMember = client.request("GET", "https://example.com", emptyMap())
    val getResponseWithExtension = client.get("https://example.com")
}
