// QDoubleSpinBox
package main

import (
    "fmt"
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QDoubleSpinBox")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label1 := widgets.NewQLabel2("QDoubleSpinBox", nil, 0)

    doubleSpinBox := widgets.NewQDoubleSpinBox(nil)
    doubleSpinBox.SetRange(0, 100)
    doubleSpinBox.SetSingleStep(0.5)
    doubleSpinBox.SetPrefix("$ ")
    doubleSpinBox.SetDecimals(1)

    label2 := widgets.NewQLabel2("$ 0.0", nil, 0)

    doubleSpinBox.ConnectValueChanged(func(d float64) {
        label2.SetText("$ " + fmt.Sprintf("%.1f", d))
    })

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label1, 0, 0)
    vbox.AddWidget(doubleSpinBox, 0, 0)
    vbox.AddWidget(label2, 0, 0)
    vbox.AddStretch(1)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
