// 절대적 배치
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Absolute Positioning")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label1 := widgets.NewQLabel2("Label1", nil, 0)
    label1.Move2(40, 50)
    label2 := widgets.NewQLabel2("Label1", nil, 0)
    label2.Move2(40, 100)

    button1 := widgets.NewQPushButton2("Button1", nil)
    button1.Move2(120, 50)
    button2 := widgets.NewQPushButton2("Button2", nil)
    button2.Move2(120, 100)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
