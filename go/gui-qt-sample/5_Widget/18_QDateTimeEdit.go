// QDateTimeEdit
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QDateTimeEdit")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label := widgets.NewQLabel2("QDateTimeEdit", nil, 0)

    dateTimeEdit := widgets.NewQDateTimeEdit(nil)
    dateTimeEdit.SetDateTime(core.QDateTime_CurrentDateTime())
    dateTimeEdit.SetDateTimeRange(core.NewQDateTime3(core.NewQDate3(1900, 1, 1), core.NewQTime3(00, 00, 00, 0), 0), core.NewQDateTime3(core.NewQDate3(2100, 1, 1), core.NewQTime3(00, 00, 00, 0), 0))
    dateTimeEdit.SetDisplayFormat("yyyy.MM.dd hh:mm:ss")

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label, 0, 0)
    vbox.AddWidget(dateTimeEdit, 0, 0)
    vbox.AddStretch(1)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
