// QComboBox
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QComboBox")

    label := widgets.NewQLabel2("Combo Items", window, 0)
    label.SetFixedSize2(150, 30)
    label.Move2(50, 50)

    combobox := widgets.NewQComboBox(window)
    // combobox.AddItem("Option1", userData core.QVariant_ITF) // core.QVariant_ITF 가 뭔지 알수 없다
    // combobox.AddItem("Option2", userData core.QVariant_ITF)
    // combobox.AddItem("Option3", userData core.QVariant_ITF)
    // combobox.AddItem("Option4", userData core.QVariant_ITF)
    items := []string{"Some", "Combo", "Box", "Items"}
    combobox.AddItems(items)
    combobox.SetFixedSize2(200, 30)
    combobox.Move2(180, 50)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
