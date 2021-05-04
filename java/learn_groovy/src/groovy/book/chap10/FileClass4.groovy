package groovy.book.chap10

import java.io.File

// 10.2 File Class

// Recursively traversing a directory

// List those files exceeding a given size
def printDir(dirName, size) {
    new File(dirName).eachFileRecurse { file ->
        if (file.length() > size)
            println "${file.getName()}"
    }
}

if (args.size() != 2 || new File(args[0].isDirectory() == false)) {
    println 'Usage: example05 directory size'
} else {
    // List from the current directory
    printDir(args[0], args[1].toInteger())
}
