// QGroupBox
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {
    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Box Layout")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    grid := widgets.NewQGridLayout(widget)
    grid.AddWidget2(createFirstExclusiveGroup(), 0, 0, 0)
    grid.AddWidget2(createSecondExclusiveGroup(), 1, 0, 0)
    grid.AddWidget2(createNonExclusiveGroup(), 0, 1, 0)
    grid.AddWidget2(createPushButtonGroup(), 1, 1, 0)

    window.SetGeometry2(300, 300, 600, 500)
    window.Show()

    app.Exec()
}

func createFirstExclusiveGroup() *widgets.QGroupBox {
    groupbox := widgets.NewQGroupBox2("Exclusive Radio Buttons", nil)

    radio1 := widgets.NewQRadioButton2("Radio1", nil)
    radio2 := widgets.NewQRadioButton2("Radio2", nil)
    radio3 := widgets.NewQRadioButton2("Radio3", nil)
    radio1.SetChecked(true)

    vbox := widgets.NewQVBoxLayout2(nil)
    vbox.AddWidget(radio1, 0, 0)
    vbox.AddWidget(radio2, 0, 0)
    vbox.AddWidget(radio3, 0, 0)

    groupbox.SetLayout(vbox)

    return groupbox
}

func createSecondExclusiveGroup() *widgets.QGroupBox {
    groupbox := widgets.NewQGroupBox2("Exclusive Radio Buttons", nil)
    groupbox.SetCheckable(true)
    groupbox.SetChecked(false)

    radio1 := widgets.NewQRadioButton2("Radio1", nil)
    radio2 := widgets.NewQRadioButton2("Radio2", nil)
    radio3 := widgets.NewQRadioButton2("Radio3", nil)
    radio1.SetChecked(true)
    checkbox := widgets.NewQCheckBox2("Independent Checkbox", nil)
    checkbox.SetChecked(true)

    vbox := widgets.NewQVBoxLayout2(nil)
    vbox.AddWidget(radio1, 0, 0)
    vbox.AddWidget(radio2, 0, 0)
    vbox.AddWidget(radio3, 0, 0)
    vbox.AddWidget(checkbox, 0, 0)
    vbox.AddStretch(1)

    groupbox.SetLayout(vbox)

    return groupbox
}

func createNonExclusiveGroup() *widgets.QGroupBox {
    groupbox := widgets.NewQGroupBox2("Non-Exclusive Checkboxes", nil)
    groupbox.SetFlat(true)

    checkbox1 := widgets.NewQCheckBox2("Checkbox1", nil)
    checkbox2 := widgets.NewQCheckBox2("Checkbox2", nil)
    checkbox2.SetChecked(true)
    tristatebox := widgets.NewQCheckBox2("Tri-state Button", nil)
    tristatebox.SetTristate(true)

    vbox := widgets.NewQVBoxLayout2(nil)
    vbox.AddWidget(checkbox1, 0, 0)
    vbox.AddWidget(checkbox2, 0, 0)
    vbox.AddWidget(tristatebox, 0, 0)
    vbox.AddStretch(1)

    groupbox.SetLayout(vbox)

    return groupbox
}

func createPushButtonGroup() *widgets.QGroupBox {
    groupbox := widgets.NewQGroupBox2("Push Buttons", nil)
    groupbox.SetCheckable(true)
    groupbox.SetChecked(true)

    pushbutton := widgets.NewQPushButton2("Normal Button", nil)

    togglebutton := widgets.NewQPushButton2("Toggle Button", nil)
    togglebutton.SetCheckable(true)
    togglebutton.SetChecked(true)

    flatbutton := widgets.NewQPushButton2("Flat Button", nil)
    flatbutton.SetFlat(true)

    popupbutton := widgets.NewQPushButton2("Popup Button", nil)
    menu := widgets.NewQMenu(nil)
    menu.AddAction("First Item")
    menu.AddAction("Second Item")
    menu.AddAction("Third Item")
    menu.AddAction("Fourth Item")
    popupbutton.SetMenu(menu)

    vbox := widgets.NewQVBoxLayout2(nil)
    vbox.AddWidget(pushbutton, 0, 0)
    vbox.AddWidget(togglebutton, 0, 0)
    vbox.AddWidget(flatbutton, 0, 0)
    vbox.AddWidget(popupbutton, 0, 0)
    vbox.AddStretch(1)

    groupbox.SetLayout(vbox)

    return groupbox
}
