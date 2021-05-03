package groovy.book.chap09

// 9.1 Closures

// Leave the cloure outside of the actual argument list
def greeting = 'Hello'
def clos = { param -> println "${greeting} ${param}" }

def demo(clo) {
    def greeting = 'Bonjour' // does not affect closure
    clo.call('Ken')
}

//demo(clos)                                   // 1: closure reference; include parentheses
demo() { param -> println "Welcome ${param}" } // 2: closure literal; include parentheses

demo clos                                      // 3: closure reference; omit parentheses
demo { param -> println "Welcome ${param}" }   // 4: closure literal; omit parentheses
