import TimeInterval.*
import java.util.Calendar

enum class TimeInterval { DAY, WEEK, YEAR }

class RepeatedTimeInterval(val timeInterval: TimeInterval, val amount: Int)

operator fun TimeInterval.times(number: Int) =
    RepeatedTimeInterval(this, number)

data class MyDate(val year: Int, val month: Int, val dayOfMonth: Int)

/*
 * Returns the date after the given interval.
 * The interval is specified as the given amount of days, week of years.
 * Usages:
 * 'date.addTimeIntervals(TimeInterval.DAY, 4)'
 * 'date.addTimeIntervals(TimeInterval.WEEK, 3)'
 */
fun MyDate.addTimeIntervals(timeInterval: TimeInterval, amount: Int): MyDate {
    val c = Calendar.getInstance()
    c.set(year + if (timeInterval == TimeInterval.YEAR) amount else 0, month, dayOfMonth)
    var timeInMillis = c.timeInMillis
    val millisecondsInADay = 24 * 60 * 60 * 1000L
    timeInMillis += amount * when (timeInterval) {
        TimeInterval.DAY -> millisecondsInADay
        TimeInterval.WEEK -> 7 * millisecondsInADay
        TimeInterval.YEAR -> 0L
    }
    val result = Calendar.getInstance()
    result.timeInMillis = timeInMillis
    return MyDate(result.get(Calendar.YEAR), result.get(Calendar.MONTH), result.get(Calendar.DATE))
}

operator fun MyDate.plus(timeInterval: TimeInterval): MyDate =
    addTimeIntervals(timeInterval, 1)

operator fun MyDate.plus(timeIntervals: RepeatedTimeInterval) =
    addTimeIntervals(timeIntervals.timeInterval, timeIntervals.amount)

fun task1(today: MyDate): MyDate {
    return today + YEAR + WEEK
}

fun task2(today: MyDate): MyDate {
    return today + YEAR * 2 + WEEK * 3 + DAY * 5
}

fun main() {
    println(task1(MyDate(2000, 1, 1)))
    println(task2(MyDate(2000, 2, 2)))
}
