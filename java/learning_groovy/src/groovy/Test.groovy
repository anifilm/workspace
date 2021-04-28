package groovy

a = 20
println a
println plus(10, 20)

static def plus(x, y) {
    x + y
}

println "실행 완료!"
