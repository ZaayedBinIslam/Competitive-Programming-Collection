fun main() {
    repeat(readln().toInt()) {
        var (x, y) = readln().split(" ").map { it.toInt() }
        val a = minOf(x, y)
        val b = maxOf(x, y)
        println("$a $b")

    }
}