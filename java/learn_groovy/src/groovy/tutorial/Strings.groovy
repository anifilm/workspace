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
println '1st 3 Characters ' + name[0..-3] // "Der"

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
// 문자열은 immutable 객체 (remove 연산은 비파괴적인 결과이며 재할당을 필요로 함)
println repeatStr - 'What '

// Split the string
// 공백을 기준으로 문자열을 잘라서 리스트로 변환
println repeatStr.split(' ')
println repeatStr.split() // 매개변수 기본값은 공백
// 문자열을 문자 단위로 리스트 변환 (공백 포함)
println repeatStr.split('')
println repeatStr.toList()

// Replace all strings
// 문자열에서 모든 공백을 '-'로 변경
println repeatStr.replace(' ', '-')
// 문자열에서 해당 문자(또는 문자열)를 찾아 모두 변경
println repeatStr.replaceAll('I', 'she')
// 문자열에서 해당 문자(또는 문자열)를 처음에 해당하는 문자만 변경
println repeatStr.replaceFirst('I', 'she')

// Uppercase and lowercase
println("Uppercase " + name.toUpperCase());
println("Lowercase " + name.toLowerCase());

// <=> returns -1 if 1st string is before 2nd
// 1 if the opposite and 0 if equal
// 문자열 사전순 비교
// 앞의 문자열이 사전순 앞에 있다면 -1
// 앞의 문자열이 사전순 뒤에 있다면 1
// 문자열이 같다면 0
println 'Ant <=> Banana ' + ('Ant' <=> 'Banana')
println 'Banana <=> Ant ' + ('Banana' <=> 'Ant')
println 'Ant <=> Ant ' + ('Ant' <=> 'Ant')
