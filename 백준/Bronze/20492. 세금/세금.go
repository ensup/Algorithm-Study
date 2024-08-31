package main

import (
    "fmt"
)

func main() {
    var prize int
    fmt.Scan(&prize)
    tax_1 := prize/100*78
    tax_2 := prize-(prize/5*22/100)
    fmt.Printf("%d %d\n",tax_1,tax_2)
}
