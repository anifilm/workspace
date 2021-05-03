package groovy.book.chap04

// 4.4 Map Methods
def mp = ['Ken': 2745, 'John': 2746, 'Sally': 2742]
// put() 메서드 - 해당 키와 값을 추가, 기존 요소가 있는 경우 기존 값을 대치
mp.put('Bob', 2713)   // [Bob: 2713, Ken: 2745, Sally: 2742, John: 2746]
println mp
println mp.containsKey('Ken') // true
// get() 메서드 - 맵에 없는 요소를 get() 메서드 사용시 해당 요소를 추가한 후 해당 값을 반환
println mp.get('David', 9999) // 9999
println mp.get('Sally')       // 2742
println mp.get('Billy')       // null
println mp.keySet()           // [David, Bob, Ken, Sally, John]
println mp.size()             // 5
println mp['Ken']             // 2745

// 맵의 값 요소들을 리스트로 반환
println mp.values().asList()  // [2745, 2746, 2742, 2713, 9999]
