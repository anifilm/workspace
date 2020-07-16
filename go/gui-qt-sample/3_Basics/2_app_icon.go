// 어플리케이션 아이콘 넣기
package main

import (
    "os"

    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Icon")

    window.SetWindowIcon(gui.NewQIcon5("./res/web.png"))
    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
