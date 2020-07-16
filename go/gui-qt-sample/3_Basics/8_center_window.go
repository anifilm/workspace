// 창을 화면의 가운데로
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("My First Application")

    window.Resize2(500, 400)

    // 창을 화면 가운데로 위치 시킨다
    var availableGeometry = widgets.QApplication_Desktop().AvailableGeometry2(window)
    window.Move2((availableGeometry.Width()-window.Width())/2, (availableGeometry.Height()-window.Height())/2)

    window.Show()

    app.Exec()
}
