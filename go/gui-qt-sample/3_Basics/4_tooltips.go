// 툴팁 나타내기
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Tooltips")

    button := widgets.NewQPushButton2("Button", window)
    button.SetToolTip("This is a <b>QPushButton</b> widget")
    button.Move2(200, 200)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
