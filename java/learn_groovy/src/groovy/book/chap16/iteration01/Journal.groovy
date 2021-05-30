package groovy.book.chap16.iteration01

class Journal extends Publication {
    def editor

    String toString() {
        return "Journal: " + super.toString() + " edited by: ${editor}"
    }
}
