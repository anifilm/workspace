package groovy.book.chap16.iteration01

class Book extends Publication {
    def author

    String toString() {
        return 'Book: ' + super.toString() + " by: ${author}"
    }
}
