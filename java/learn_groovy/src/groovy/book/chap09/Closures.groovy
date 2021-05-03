package groovy.book.chap09

// 9.1 Closures

// A closure and its invocation
def clos = { println 'Hello world' }

clos.call()

// Parameterized closure def
def clos2 = { param -> println "Hello ${param}" }

clos2.call('world') // actual argument is 'world'
clos2.call('again') // actual argument is 'again'
clos2('shortcut')   // abbreviated form

// Implicit single parameter
def clos3 = { println "Hello ${it}" }

clos3.call('world')
clos3.call('again')
clos3('shortcut')

// Closures and enclosing scope
def greeting4 = 'Hello'
def clos4 = { param -> println "${greeting4} ${param}" }

clos4.call('world')

// Now show that changes to this variable change ther closure.
greeting4 = 'Welcome'
clos4.call('world')
