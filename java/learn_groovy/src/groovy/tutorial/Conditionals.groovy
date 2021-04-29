package groovy.tutorial

// Conditonal Operators : ==, !=, >, <, >=, <=
// Logical Operators : && || !
def ageOld = 6

if (ageOld == 5) {
    println 'Go to Kindergarten'
} else if (5 < ageOld && ageOld < 18) {
    printf 'Go to grade %d \n', (ageOld - 5)
} else {
    println 'Go to College'
}

def canVote = true

// Ternary operator
println canVote ? 'Can Vote' : 'Can\'t Vote'

// Switch statement
switch (ageOld) {
    case 16:
        println 'You can drive'
    case 18:
        println 'You can vote'
        // Stops checking the rest if true
        break
    default: println 'Have Fun'
}

// Switch with list options
switch (ageOld) {
    case 0..6:
        println 'Toddler'
        break
    case 7..12:
        println 'Child'
        break
    case 13..18:
        println 'Teenager'
        break
    default:
        println 'Adult'
}
