package groovy.book.chap10

import java.io.File

// 10.2 File Class

// Sorting a file

if (args.size() != 1) {
    println 'Usage: example08 filename'
} else {
    def lines = []

    // Read from the text file
    new File(args[0]).eachLine { line ->
        lines << line
    }

    // Sort the text
    lines.sort()

    // Write back to text file
    new File(args[0]).withPrintWriter { pritnWriter ->
        lines.each { line ->
            pritnWriter.println(line)
        }
    }
}
