// QSpinBox
package main

import (
    "os"
    "strconv"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QSpinBox")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label1 := widgets.NewQLabel2("QSpinBox", nil, 0)

    spinBox := widgets.NewQSpinBox(nil)
    spinBox.SetMinimum(-10)
    spinBox.SetMaximum(30)
    // spinBox.SetRange(-10, 30)
    spinBox.SetSingleStep(2)

    label2 := widgets.NewQLabel2("0", nil, 0)

    spinBox.ConnectValueChanged(func(i int) {
        label2.SetText(strconv.Itoa(i))
    })

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label1, 0, 0)
    vbox.AddWidget(spinBox, 0, 0)
    vbox.AddWidget(label2, 0, 0)
    vbox.AddStretch(1)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
