// QDateEdit
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QDateEdit")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label := widgets.NewQLabel2("QDateEdit", nil, 0)

    dateEdit := widgets.NewQDateEdit(nil)
    dateEdit.SetDate(core.QDate_CurrentDate())
    dateEdit.SetMinimumDate(core.NewQDate3(1900, 1, 1))
    dateEdit.SetMaximumDate(core.NewQDate3(2100, 12, 31))
    // dateEdit.SetDateRange(core.NewQDate3(1900, 1, 1), core.NewQDate3(2100, 12, 31))

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label, 0, 0)
    vbox.AddWidget(dateEdit, 0, 0)
    vbox.AddStretch(1)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
