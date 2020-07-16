// 박스 레이아웃 3
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Box Layout (Vertical)")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    //Vertical Layout
    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(widgets.NewQPushButton2("one", nil), 0, 0)
    vbox.AddWidget(widgets.NewQPushButton2("two", nil), 0, 0)
    vbox.AddWidget(widgets.NewQPushButton2("three", nil), 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
