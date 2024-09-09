import	java.util.*
fun	main()	{
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val nums = IntArray(n)
    var counting=0
    for	(i in 0..n-1)	{
        nums[i] = scanner.nextInt()
    }
    val v =	scanner.nextInt()
    for (i in 0..n-1){
        if(nums[i]==v)
            counting++
    }
    println(counting)
}