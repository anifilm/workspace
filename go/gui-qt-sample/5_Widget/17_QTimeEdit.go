// QTimeEdit
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QTimeEdit")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label := widgets.NewQLabel2("QTimeEdit", nil, 0)

    timeEdit := widgets.NewQTimeEdit(nil)
    timeEdit.SetTime(core.QTime_CurrentTime())
    timeEdit.SetTimeRange(core.NewQTime3(3, 00, 00, 0), core.NewQTime3(23, 30, 00, 0))
    timeEdit.SetDisplayFormat("hh:mm:ss")

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label, 0, 0)
    vbox.AddWidget(timeEdit, 0, 0)
    vbox.AddStretch(1)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
