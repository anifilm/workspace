package groovy.tutorial

def name = 'Derek'

// A string surrounded by single quotes is taken literally
// but backslashed characters are recognized
println 'I am ${name}'
println "I am $name"

// Triple quoted strings continue over many lines
// It is possible to strip that character by escaping the newline with a backslash:
def multString = '''\
I am
a string
that goes on
for many lines'''

println multString

// You can access a string by index
// 문자열 인덱스로 요소를 출력
println '3rd Index of Name ' + name[3] // "e"
// 문자열에서 해당 요소의 인덱스를 반환
println 'Index of r ' + name.indexOf('r') // 2

// You can also get a slice
// 문자열 슬라이스 사용
println '1st 3 Characters ' + name[0..2] // "Der"

// Get specific Characters
println 'Every Other Character ' + name[0,2,4] // "Drk"

// Get characters starting at index
// 'Derek'.substring(1) 인덱스 1부터 끝까지
println 'Substring at 1 ' + name.substring(1) // "errk"

// Get characters at index up to another
// 'Derek'.substring(1,4) 인덱스 1부터 4이전 까지
println 'Substring at 1 to 4 ' + name.substring(1,4) // "ere"

// Concatenate strings
// 문자열 연결
println 'My Name ' + name
println 'My Name '.concat(name)

// Repeat a string
// 문자열 반복
def repeatStr = 'What I said is ' * 2
println(repeatStr);

// Check for equality
// 문자열 비교
println 'Derek == Derek : ' + ('Derek' == 'Derek')
println 'Derek == Derek : ' + ('Derek' == 'derek')
println 'Derek == Derek : ' + ('Derek'.equals('Derek'))
println 'Derek == derek : ' + ('Derek'.equalsIgnoreCase('derek'))

// Get length of string
println 'repeatStr.length() : ' + repeatStr.length()
println 'repeatStr.size() : ' + repeatStr.size()

// Remove first occurance
println repeatStr - 'What '
