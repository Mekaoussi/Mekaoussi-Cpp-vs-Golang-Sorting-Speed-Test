package main

import (
	"fmt"
	"math/rand"
	"time"
)

func sorter(ls []int, n int) {
	swapped := true
	for swapped {
		swapped = false
		for i := 1; i < n; i++ {
			if ls[i-1] > ls[i] {
				ls[i-1]+=ls[i]
                ls[i]=ls[i-1]-ls[i]
                ls[i-1]-=ls[i]				
				swapped = true
			}
		}
	}
}
func how_many_in(ls []int, element int) {
	count := 0
	for i := 0; i < len(ls); i++ {
		if ls[i] == element {
			count += 1
		}
	}
	fmt.Println(count)
}
func main() {
	var mylist []int
	rand.Seed(int64(time.Now().Second()))
	start := time.Now()
	n := 100000
	for i := 0; i < n; i++ { //APPEnd
		mylist = append(mylist, rand.Intn(101))
	}

	fmt.Println("First Task Done :")

	sorter(mylist, len(mylist)) //SORT
	fmt.Println("Second Task Done :")

	for i := 0; i < n; i++ {
		fmt.Println(mylist[i])
	}
	fmt.Println("Third Task Done :") //PRINT

	how_many_in(mylist, 66) //SEARCH
	fmt.Println("Fourth Task Done :")
	duration := time.Since((start))
	fmt.Println(duration)

}
