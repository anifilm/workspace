// 이벤트 핸들러 재구성하기 1
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Reimplementing event handler")

    window.ConnectKeyPressEvent(func(ev *gui.QKeyEvent) {
        if ev.Key() == int(core.Qt__Key_Escape) {
            window.Close()
        } else if ev.Key() == int(core.Qt__Key_F) {
            window.ShowFullScreen()
        } else if ev.Key() == int(core.Qt__Key_N) {
            window.ShowNormal()
        }
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
