package groovy.book.chap10

import java.io.File

// 10.2 File Class

// File copying with a PrintWriter

if (args.size() != 2) {
    println 'Usage: example07 filename filename'
} else {
    // Write to a destination file
    new File(args[1]).withPrintWriter { printWriter ->
        // Copy each line of the file
        new File(args[0]).eachLine { line ->
            printWriter.println(line)
        }
    }
}
