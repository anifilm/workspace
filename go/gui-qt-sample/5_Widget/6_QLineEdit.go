// QLineEdit
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QLineEdit")

    label := widgets.NewQLabel2("Type Me!", window, 0)
    label.SetFixedSize2(400, 30)
    label.Move2(50, 50)

    lineEdit := widgets.NewQLineEdit(window)
    lineEdit.SetFixedSize2(400, 30)
    lineEdit.Move2(50, 200)
    lineEdit.ConnectTextChanged(func(text string) {
        label.SetText(text)
        // label.AdjustSize()
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
