// QPixmap
package main

import (
    "os"
    "strconv"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QPixmap")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    pixmap := gui.NewQPixmap3("./res/landscape.jpg", "JPG", 0)

    label_image := widgets.NewQLabel2("", nil, 0)
    label_image.SetPixmap(pixmap)
    label_size := widgets.NewQLabel2("Width: "+strconv.Itoa(pixmap.Width())+", Height: "+strconv.Itoa(pixmap.Height()), nil, 0)
    label_size.SetAlignment(core.Qt__AlignCenter)

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label_image, 0, 0)
    vbox.AddWidget(label_size, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
