data class MyDate(val year: Int, val month: Int, val dayOfMonth: Int) : Comparable<MyDate> {
    override fun compareTo(other: MyDate) =
        if (this.year < other.year ||
        (this.year == other.year && this.month < other.month) ||
        (this.year == other.year && this.month == other.month && this.dayOfMonth < other.dayOfMonth)) -1 else 1
}

fun test(date1: MyDate, date2: MyDate) {
    println(date1 < date2)
}

fun main() {
    test(MyDate(2000, 1, 2), MyDate(2001, 1, 2))
    test(MyDate(2000, 2, 1), MyDate(2000, 1, 1))
    test(MyDate(2000, 2, 1), MyDate(2000, 2, 2))
}
