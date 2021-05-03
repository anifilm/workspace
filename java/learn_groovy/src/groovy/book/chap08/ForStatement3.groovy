package groovy.book.chap08

// 8.2 For Statement

// Looping through a Map
// Staff name and age
def staff = ['Kne': 21, 'John': 25, 'Sally': 22]

def totalAge = 0
for(staffEntry in staff) {
    totalAge += staffEntry.value
}

println "Total staff age: ${totalAge}"
