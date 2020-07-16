// 연결하기
package main

import (
    "os"
    "strconv"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Connect")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    lcdNumber := widgets.NewQLCDNumber(nil)
    lcdNumber.SetDigitCount(3)
    lcdNumber.Display("0")

    dial := widgets.NewQDial(nil)
    dial.SetMinimum(0)
    dial.SetMaximum(100)

    dial.ConnectValueChanged(func(value int) {
        lcdNumber.Display(strconv.Itoa(value))
    })

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(lcdNumber, 0, 0)
    vbox.AddWidget(dial, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
