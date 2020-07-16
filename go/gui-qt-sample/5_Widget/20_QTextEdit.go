// QTextEdit
package main

import (
    "os"
    "strconv"
    "strings"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QTextEdit")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    label1 := widgets.NewQLabel2("Enter your sentence:", nil, 0)

    textEdit := widgets.NewQTextEdit(nil)
    textEdit.SetAcceptRichText(false)

    label2 := widgets.NewQLabel2("The number of words is 0", nil, 0)

    textEdit.ConnectTextChanged(func() {
        text := textEdit.ToPlainText()
        label2.SetText("The number of words is " + strconv.Itoa(len(strings.Split(text, " "))))
    })

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(label1, 0, 0)
    vbox.AddWidget(textEdit, 0, 0)
    vbox.AddWidget(label2, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
