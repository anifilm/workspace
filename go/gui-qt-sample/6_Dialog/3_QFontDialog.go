// QFontDialog
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Font dialog")

    button := widgets.NewQPushButton2("Dialog", window)
    button.Move2(50, 50)

    label := widgets.NewQLabel2("The quick brown fox jumps over the lazy dog.", window, 0)
    // label.SetSizePolicy2(widgets.QSizePolicy__Fixed, widgets.QSizePolicy__Fixed)
    label.SetFixedSize2(400, 100)
    label.Move2(50, 200)

    button.ConnectClicked(func(bool) {
        // font := widgets.NewQFontDialog(nil).GetFont2(nil, nil)
        font := widgets.QFontDialog_GetFont2(nil, nil)
        label.SetFont(font)
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
