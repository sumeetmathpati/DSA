package main

import (
    "fmt"
)


func isPalindrome(str string) (bool) {

	l := 0
	r := len(str) - 1

	for r > l {
		if str[l] != str[r] {
			return false
		}
		l += 1
		r -= 1
	}

	return true
}

func main() {

	str := "asa"

	if isPalindrome(str) {
		fmt.Println("String is palindrome.")
	} else {
		fmt.Println("String is not palindrome.")
	}

}