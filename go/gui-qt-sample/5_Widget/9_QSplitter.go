// QSplitter
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QSplitter")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    hbox := widgets.NewQHBoxLayout2(widget)

    top := widgets.NewQFrame(nil, 0)
    top.SetFrameShape(widgets.QFrame__Box)

    midleft := widgets.NewQFrame(nil, 0)
    midleft.SetFrameShape(widgets.QFrame__StyledPanel)

    midright := widgets.NewQFrame(nil, 0)
    midright.SetFrameShape(widgets.QFrame__Panel)

    bottom := widgets.NewQFrame(nil, 0)
    bottom.SetFrameShape(widgets.QFrame__WinPanel)
    bottom.SetFrameShadow(widgets.QFrame__Sunken)

    splitter1 := widgets.NewQSplitter2(core.Qt__Horizontal, nil)
    splitter1.AddWidget(midleft)
    splitter1.AddWidget(midright)

    splitter2 := widgets.NewQSplitter2(core.Qt__Vertical, nil)
    splitter2.AddWidget(top)
    splitter2.AddWidget(splitter1)
    splitter2.AddWidget(bottom)

    hbox.AddWidget(splitter2, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
