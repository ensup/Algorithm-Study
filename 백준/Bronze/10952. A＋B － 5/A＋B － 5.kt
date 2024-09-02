import java.util.*
fun main() {
    val sc = Scanner(System.`in`)
    while(true){
        val fst = sc.nextInt()
        val scd = sc.nextInt()
        if(fst == scd && fst == 0)
            break
        else
            println(fst+scd)
    }
}