package groovy.tutorial

def randString = 'Random'

// With double quotes we can insert variables
println "A $randString string"

// You can do the same thing with printf
printf 'A %s string \n', randString

// Use multiple values
// 포매팅 출력
printf '%-10s %d %.2f %10s \n', ['Stuff', 10, 1.234, 'Random']
