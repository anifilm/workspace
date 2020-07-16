// QTabWidget
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QTabWidget")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    tab1 := widgets.NewQWidget(nil, 0)
    tab2 := widgets.NewQWidget(nil, 0)

    tabs := widgets.NewQTabWidget(nil)
    tabs.AddTab(tab1, "Tab1")
    tabs.AddTab(tab2, "Tab2")

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(tabs, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
