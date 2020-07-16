// QInputDialog
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Input dialog")

    button := widgets.NewQPushButton2("Dialog", window)
    button.Move2(50, 50)

    lineEdit := widgets.NewQLineEdit(window)
    lineEdit.SetFixedSize2(200, 30)
    lineEdit.Move2(200, 50)

    button.ConnectClicked(func(bool) {
        // text := widgets.NewQInputDialog(nil,  core.Qt__Tool).GetText(nil, "Input Dialog", "Enter your name:", 0, "", nil, core.Qt__Tool, core.Qt__ImhNone)
        text := widgets.QInputDialog_GetText(nil, "Input Dialog", "Enter your name:", 0, "", nil, core.Qt__Tool, core.Qt__ImhNone)
        lineEdit.SetText(text)
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
