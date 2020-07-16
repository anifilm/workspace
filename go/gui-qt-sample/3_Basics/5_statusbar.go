// 상태바 만들기
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Statusbar")

    statusbar := widgets.NewQStatusBar(window)
    window.SetStatusBar(statusbar)
    statusbar.ShowMessage("Ready", 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
