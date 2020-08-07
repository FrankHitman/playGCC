package main

import (
	"fmt"
)

func main() {
	fmt.Println("hello world")
}

// GOOS=linux GOARCH=arm go build  -o hellogo hello.go