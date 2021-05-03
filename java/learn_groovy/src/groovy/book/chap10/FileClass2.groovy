package groovy.book.chap10

import java.io.File

// 10.2 File Class

// WC utility

// Counters
def chars = 0
def words = 0
def lines = 0

if (args.size() != 1) {
    println 'Usage: example03 filename'
} else {
    // Process the file
    new File(args[0]).eachLine { line ->
        chars += 1 + line.length()
        words += line.tokenize().size()
        lines++
    }
    // Print the outcome
    println "chars: ${chars}; words: ${words}; lines ${lines}"
}
