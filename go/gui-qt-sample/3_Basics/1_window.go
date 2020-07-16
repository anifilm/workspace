// 창 띄우기
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("My First Application")

    window.Move2(300, 300)
    window.Resize2(500, 400)
    window.Show()

    app.Exec()
}
