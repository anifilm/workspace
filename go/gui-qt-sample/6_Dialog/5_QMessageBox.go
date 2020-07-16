// QMessageBox
package main

import (
    "os"

    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QMessageBox")

    window.ConnectCloseEvent(func(event *gui.QCloseEvent) {
        var ret = widgets.QMessageBox_Question(nil, "Message", "Are you sure to quit?", widgets.QMessageBox__Yes|widgets.QMessageBox__No, widgets.QMessageBox__NoButton)
        if ret == widgets.QMessageBox__Yes {
            event.Accept()
        } else if ret == widgets.QMessageBox__No {
            event.Ignore()
        }
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
