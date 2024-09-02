import java.util.*
fun main() {
    val sc = Scanner(System.`in`)
    val a = sc.nextInt()
    val b = sc.nextInt()
    when {
        a > b -> println(">")
        a < b -> println("<")
        a == b -> println("==")
    }
}