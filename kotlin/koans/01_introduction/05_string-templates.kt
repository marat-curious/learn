// Using the `month` variable, rewrite pattern `"""\d{2}\.\d{2}\.\d{4}"""`
// in such a way that it matches the date in the format `13 JUN 1992`

val month = "(JAN|FEB|MAR|APR|MAY|JUN|JUL|AUG|SEP|OCT|NOV|DEC)"

fun getPattern(): String = """\d{2}\ $month\ \d{4}"""

fun main() {
    println(getPattern())
}
