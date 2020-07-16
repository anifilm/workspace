// QTextBrowser
package main

import (
    "os"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QTextBrowser")

    widget := widgets.NewQWidget(nil, 0)
    window.SetCentralWidget(widget)

    lineEdit := widgets.NewQLineEdit(nil)

    textBrowser := widgets.NewQTextBrowser(nil)
    textBrowser.SetAcceptRichText(true)
    textBrowser.SetOpenExternalLinks(true)

    lineEdit.ConnectReturnPressed(func() {
        text := lineEdit.Text()
        textBrowser.Append(text)
        lineEdit.Clear()
    })

    clearButton := widgets.NewQPushButton2("Clear", nil)
    clearButton.ConnectClicked(func(bool) {
        textBrowser.Clear()
    })

    vbox := widgets.NewQVBoxLayout2(widget)
    vbox.AddWidget(lineEdit, 0, 0)
    vbox.AddWidget(textBrowser, 0, 0)
    vbox.AddWidget(clearButton, 0, 0)

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
