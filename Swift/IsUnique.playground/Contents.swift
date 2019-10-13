import UIKit

var str:String = "haola"

var ascii = Array(repeating: 0, count: 128)
var number:Int

for element in str.utf8{
    print(element)
    if let number = Int(String(element)) {
        if ascii[number] == 1{
            print("repetido")
            break
        }else{
            ascii[number] = 1
        }
    }
}

for element in ascii{
    print(element)
}

