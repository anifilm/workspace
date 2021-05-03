package groovy.book.chap05.console

class Console {
    def static readString() {
        return System.in.newReader().readLine()
    }
    def static readLine() {
        return System.in.newReader().readLine()
    }
    def static readInteger() {
        return System.in.newReader().readLine().toInteger()
    }
    def static readDouble() {
        return System.in.newReader().readLine().toDouble()
    }
    def static readBoolean() {
        return System.in.newReader().readLine().toBoolean()
    }
}
