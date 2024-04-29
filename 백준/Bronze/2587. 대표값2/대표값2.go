package main

import (
	"fmt"
	"sort"
)

func avg(a, b, c, d, e int) int {
	return (a + b + c + d + e) / 5
}

func main() {
	var (
		a, b, c, d, e int
	)
	fmt.Scan(&a, &b, &c, &d, &e)
	average := avg(a, b, c, d, e)
	var arr = []int{a, b, c, d, e}
	sort.Ints(arr)
	fmt.Println(average)
	fmt.Println(arr[2])
}
