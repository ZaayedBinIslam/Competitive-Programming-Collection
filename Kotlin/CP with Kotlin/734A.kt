private fun readStr() = readln()

fun main() {
    readln()
    val str = readStr()
    var a = 0
    var d = 0
    for (c in str) {
        if (c.equals('A')) a++;
        else d++
    }
    if (a > d) println("Anton")
    else if (a < d) println("Danik")
    else println("Friendship")
}