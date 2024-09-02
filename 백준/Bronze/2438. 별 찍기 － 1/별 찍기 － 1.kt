import java.util.*
fun main() {
    val sc = Scanner(System.`in`)
    val n = sc.nextInt()
    for (i in 1..n) {
        for (j in 1..i)
            print('*')
        println()
    }
}