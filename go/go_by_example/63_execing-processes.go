// 프로세스 실행
package main

import (
    "os"
    "os/exec"
    "syscall"
)

func main() {

    binary, lookErr := exec.LookPath("ls")
    if lookErr != nil {
        panic(lookErr)
    }

    args := []string{"ls", "-a", "-l", "-h"}

    env := os.Environ()

    exeErr := syscall.Exec(binary, args, env)
    if exeErr != nil {
        panic(exeErr)
    }
}
