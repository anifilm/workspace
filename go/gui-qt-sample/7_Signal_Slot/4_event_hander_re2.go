// 이벤트 핸들러 재구성하기 2
package main

import (
    "fmt"
    "os"

    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Reimplementing event handler")

    var (
        x = 0
        y = 0
    )

    text := fmt.Sprintf("x: %d, y: %d", x, y)
    label := widgets.NewQLabel2(text, window, 0)
    label.Move2(50, 50)

    window.SetMouseTracking(true)

    window.ConnectMouseMoveEvent(func(ev *gui.QMouseEvent) {
        x = ev.X()
        y = ev.Y()

        text := fmt.Sprintf("x: %d, y: %d", x, y)
        label.SetText(text)
        label.AdjustSize()
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
