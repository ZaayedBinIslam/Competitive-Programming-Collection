private fun readStr() = readln()

fun main() {
    val ber = readStr()
    val bir = readStr().reversed()

    if (ber == bir) println("YES")
    else println("NO")

}