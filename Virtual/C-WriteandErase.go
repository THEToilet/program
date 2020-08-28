package main

import(
	"fmt"
)

func main(){
	m := make(map[int64]bool)
	var N int
	fmt.Scan(&N)
	for i := 0; i<N; i++ {
		var a int64
		fmt.Scan(&a)
		if m[a] {
			m[a] = true
		}
	}
	var ans int32
	for key, _ := range m {
		if m[key] {
				ans = ans + 1
		}
		fmt.Println(key)
	}
	fmt.Println(ans)
}

