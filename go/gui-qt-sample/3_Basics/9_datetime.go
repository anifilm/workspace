// 날짜와 시간 표시하기
package main

import (
    "os"
    "time"

    "github.com/therecipe/qt/widgets"
)

func main() {

    datetime := time.Now().Format("2020년 7월 1일 수요일")

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Statusbar")

    statusbar := widgets.NewQStatusBar(window)
    window.SetStatusBar(statusbar)
    statusbar.ShowMessage(datetime, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
