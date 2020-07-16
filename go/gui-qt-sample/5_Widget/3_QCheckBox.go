// QCheckBox
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QCheckBox")

    checkbox := widgets.NewQCheckBox2("Show Title", window)
    checkbox.Toggle()
    checkbox.ConnectStateChanged(func(state int) {
        if state == 2 { // 2 -> checked
            window.SetWindowTitle("QCheckBox")
        } else { // 0 -> unchecked
            window.SetWindowTitle(" ")
        }
    })
    checkbox.SetFixedSize2(120, 30) // 글자 일부가 잘리는 것을 방지
    checkbox.Move2(50, 50)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
