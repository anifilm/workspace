// QPushButton
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QPushButton")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    button1 := widgets.NewQPushButton2("&Button1", nil)
    button1.SetCheckable(true)
    button1.Toggle()

    button2 := widgets.NewQPushButton2("", nil)
    button2.SetText("Button&2")

    button3 := widgets.NewQPushButton2("Button3", nil)
    button3.SetEnabled(false)

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(button1, 0, 0)
    vbox.AddWidget(button2, 0, 0)
    vbox.AddWidget(button3, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
