// 메뉴바 만들기
package main

import (
    "os"

    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Menubar")

    var menu = window.MenuBar().AddMenu2("&File")

    var exitIcon = gui.QIcon_FromTheme2("Exit", gui.NewQIcon5("./res/exit.png"))
    var exit = menu.AddAction2(exitIcon, "&Exit")
    exit.SetShortcuts2(gui.QKeySequence__Close) // gui.QKeySequence__Close -> Ctrl+Q (Window에서는 표시되지 않음)
    exit.SetStatusTip("Exit application")
    exit.ConnectTriggered(func(bool) {
        app.QuitDefault()
    })

    statusbar := widgets.NewQStatusBar(window)
    window.SetStatusBar(statusbar)
    statusbar.ShowMessage("Ready", 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
