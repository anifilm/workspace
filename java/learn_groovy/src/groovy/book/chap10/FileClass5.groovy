package groovy.book.chap10

import java.io.File

// 10.2 File Class

// File copying

if (args.size() != 2) {
    println 'Usage: example06 filename filename'
} else {
    // Write to a destination file
    def outFile = new File(args[1])
    if (outFile.exists())
        outFile.delete()

    // Create a PrintWriter
    def printWriter = outFile.newPrintWriter()

    // Copy each line of the file
    new File(args[0]).eachLine { line ->
        printWriter.println(line)
    }

    // Close up
    printWriter.flush()
    printWriter.close()
}
