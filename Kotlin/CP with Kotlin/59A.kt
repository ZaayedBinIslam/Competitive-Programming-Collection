private fun readStr() = readln()

fun main() {
    val str = readStr()
    var u = 0
    var l = 0
    for (c in str) {
        if (c.isUpperCase()) u++
        else l++
    }
    if (u > l) println(str.uppercase())
    else println(str.lowercase())

}