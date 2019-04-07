import UIKit

//var comment = [String]()
var comment:Array<String> = []
var comment2:[String] = []

comment2.append("Anna")
comment2.append("Alex")

print(comment2)

var comment3 = ["Anna", "Alex", "Brian", "Jack"]

comment3 += ["Lim"]
comment3 += ["Jim"]
comment3 += ["Kim"]

print(comment3[1])

comment3[1] = "Tim"

print(comment3[1])

//immutable Array
let comment4 = ["Anna", "Alex", "Brian", "Jack"]

print(comment4)
