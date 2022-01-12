package main

import (
	"fmt"
	"net/http"
)

func main() {
	r := &router{make(map[string]map[string]http.HandlerFunc)}

	r.HandlerFunc("GET", "/", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprintln(w, "welcome!")
	})
	r.HandlerFunc("GET", "about", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprintln(w, "about")
	})
	// 8080 포트로 웹 서버 구동
	http.ListenAndServe(":8080", nil)
}
