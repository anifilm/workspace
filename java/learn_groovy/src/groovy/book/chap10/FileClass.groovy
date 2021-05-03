package groovy.book.chap10

import java.io.File

// 10.2 File Class

// Read and display a file, line-at-a-time
if (args.size() != 1) {
    println 'Usage: example02 filename'
} else {
    // Print each line of the file
    new File(args[0]).eachLine { line ->
        println "Line: ${line}"
    }
}
