// 박스 레이아웃
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Box Layout")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    button1 := widgets.NewQPushButton2("OK", nil)
    button2 := widgets.NewQPushButton2("Cancel", nil)

    hbox := widgets.NewQHBoxLayout()
    hbox.AddStretch(1)
    hbox.AddWidget(button1, 0, 0)
    hbox.AddWidget(button2, 0, 0)
    hbox.AddStretch(1)

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddStretch(3)
    vbox.AddLayout(hbox, 0) // hbox 레이아웃을 삽입
    vbox.AddStretch(1)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
