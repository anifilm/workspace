// QRadioButton
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QRadioButton")

    radiobutton1 := widgets.NewQRadioButton2("First Radio Button", window)
    radiobutton1.SetFixedSize2(200, 30)
    radiobutton1.Move2(50, 50)
    radiobutton1.SetChecked(true)

    radiobutton2 := widgets.NewQRadioButton2("", window)
    radiobutton2.SetFixedSize2(200, 30)
    radiobutton2.Move2(50, 100)
    radiobutton2.SetText("Second Radio Button")

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
