package main

import (
	"fmt"
	"sort"
)

func main() {
	var N, k int
	fmt.Scan(&N, &k)

	arr := make([]int, N)
	for i := 0; i < N; i++ {
		fmt.Scan(&arr[i])
	}

	sort.Sort(sort.Reverse(sort.IntSlice(arr)))

	if k > 0 && k <= N {
		fmt.Println(arr[k-1])
	} else {
		fmt.Println("잘못된 입력입니다.")
	}
}

