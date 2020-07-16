// 스타일 꾸미기
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Stylesheet")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label_red := widgets.NewQLabel2("Red", nil, 0)
    label_green := widgets.NewQLabel2("Green", nil, 0)
    label_blue := widgets.NewQLabel2("Blue", nil, 0)

    label_red.SetStyleSheet("color:red; border-style:solid; border-width:2px; border-color:#FA8072; border-radius:3px")
    label_green.SetStyleSheet("color:green; background-color:#7FFFD4")
    label_blue.SetStyleSheet("color:blue; background-color:#87CEFA; border-style:dashed; border-width:3px; border-color:#1E90FF")

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label_red, 0, 0)
    vbox.AddWidget(label_green, 0, 0)
    vbox.AddWidget(label_blue, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
