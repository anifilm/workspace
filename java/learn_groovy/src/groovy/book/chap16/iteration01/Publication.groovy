package groovy.book.chap16.iteration01

abstract class Publication {
    def catalogNumber
    def title

    String toString() {
        return "${catalogNumber}: ${title}"
    }
}
