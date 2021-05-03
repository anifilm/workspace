package groovy.book.chap09

// 9.1 Closures

// Effect of scope
def greeting = 'Hello'
def clos = { param -> println "${greeting} ${param}" }

clos.call('world')

// Now show that changes to this variable change the closure.
greeting = 'Welcome'
clos.call('world')

def demo(clo) {
    def greeting = 'Bonjour' // does not affect closure
    clo.call('Ken')
}

demo(clos)
