// 이벤트 핸들러 만들기
package main

import (
    "os"
    "strconv"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Event Handler")

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
    button1 := widgets.NewQPushButton2("Big", nil)
    button2 := widgets.NewQPushButton2("Small", nil)

    button1.ConnectClicked(func(bool) {
        window.Resize2(700, 600)
    })
    button2.ConnectClicked(func(bool) {
        window.Resize2(500, 400)
    })

    hbox := widgets.NewQHBoxLayout2(nil)
    hbox.AddWidget(button1, 0, 0)
    hbox.AddWidget(button2, 0, 0)

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(lcdNumber, 0, 0)
    vbox.AddWidget(dial, 0, 0)
    vbox.AddLayout(hbox, 0) // hbox 레이아웃을 삽입

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
