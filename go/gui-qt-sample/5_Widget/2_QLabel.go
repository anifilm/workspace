// QLabel
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QLabel")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label1 := widgets.NewQLabel2("First Label", nil, 0)
    label1.SetAlignment(core.Qt__AlignCenter)

    label2 := widgets.NewQLabel2("Second Label", nil, 0)
    label2.SetAlignment(core.Qt__AlignVCenter)

    font1 := label1.Font()
    font1.SetPointSize(20)

    font2 := label2.Font()
    font2.SetFamily("Time New Roman")
    font2.SetBold(true)

    label1.SetFont(font1)
    label2.SetFont(font2)

    layout := widgets.NewQVBoxLayout2(widget)
    layout.AddWidget(label1, 0, 0)
    layout.AddWidget(label2, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
