// 창 닫기
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Quit Button")

    button := widgets.NewQPushButton2("Quit", window)
    button.ConnectClicked(func(bool) {
        app.QuitDefault()
    })
    button.Move2(200, 200)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    widgets.QApplication_Exec()
}
