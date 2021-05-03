package groovy.book.chap08

// 8.2 For Statement

// Looping through a String
def name = 'Kenneth'
def listIfCharacters = []

for (letter in name) {
    listIfCharacters << letter
}

println "listOfCharacters: ${listIfCharacters}"
