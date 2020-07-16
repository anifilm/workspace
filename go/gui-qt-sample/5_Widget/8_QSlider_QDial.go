// QSlider & QDial
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QSlider & QDial")

    dial := widgets.NewQDial(window)
    dial.SetGeometry2(160, 40, 150, 150)
    dial.SetRange(0, 100)
    dial.SetValue(dial.Maximum() / 2)

    slider := widgets.NewQSlider2(core.Qt__Horizontal, window)
    slider.SetGeometry2(160, 220, 150, 30)
    slider.SetRange(0, 100)
    slider.SetValue(slider.Maximum() / 2)
    slider.SetSingleStep(2)

    dial.ConnectValueChanged(func(value int) {
        slider.SetValue(value)
    })
    slider.ConnectValueChanged(func(value int) {
        dial.SetValue(value)
    })

    button := widgets.NewQPushButton2("Default", window)
    button.Move2(184, 300)
    button.ConnectClicked(func(bool) {
        slider.SetValue(slider.Maximum() / 2)
        dial.SetValue(dial.Maximum() / 2)
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
