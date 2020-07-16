// QCalendarWidget
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QCalendarWidget")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    calendar := widgets.NewQCalendarWidget(nil)
    calendar.SetGridVisible(true)

    label := widgets.NewQLabel2("", nil, 0)
    calendar.ConnectClicked(func(date *core.QDate) {
        label.SetText(date.ToString2(core.Qt__TextDate))
    })

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(calendar, 0, 0)
    vbox.AddWidget(label, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
