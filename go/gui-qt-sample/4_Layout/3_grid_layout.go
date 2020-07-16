// 그리드 레이아웃
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Grid Layout")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    grid := widgets.NewQGridLayout(widget)

    grid.AddWidget2(widgets.NewQLabel2("Title:", nil, 0), 0, 0, 0)
    grid.AddWidget2(widgets.NewQLabel2("Author:", nil, 0), 1, 0, 0)
    grid.AddWidget2(widgets.NewQLabel2("Review:", nil, 0), 2, 0, 0)

    grid.AddWidget2(widgets.NewQLineEdit2("", nil), 0, 1, 0)
    grid.AddWidget2(widgets.NewQLineEdit2("", nil), 1, 1, 0)
    grid.AddWidget2(widgets.NewQTextEdit2("", nil), 2, 1, 0) // 텍스트 편집 부분, LineEdit와 다르다

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
