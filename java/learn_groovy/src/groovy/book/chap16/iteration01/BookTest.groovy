package groovy.book.chap16.iteration01

class BookTest extends GroovyTestCase {
    /*
     * Test that the expected String is returned
     */
    void testToString() {
        def bk1 = new Book(catalogNumber: '111', title: 'Groovy', author: 'K Barclay')
        def expected = 'Book: 111: Groovy by: K Barclay'

        assertToString(bk1, expected)
    }
}
