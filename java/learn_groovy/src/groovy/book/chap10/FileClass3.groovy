package groovy.book.chap10

import java.io.File

// 10.2 File Class

// Directory listing

// List the content of a directory File
def listDir(dirFile, indent) {
    dirFile.eachFile { file ->
        (0..<indent).each { print " " }
        println "${file.getName()}"
        if (file.isDirectory())
            listDir(file, 2 + indent)
    }
}

// Print the content of a named directory
def printDir(dirName) {
    listDir(new File(dirName), 0)
}

if (args.size() != 1 || new File(args[0]).isDirectory() == false) {
    println 'Usage: example04 directory'
} else {
    // Print the current directory
    printDir(args[0])
}
