// QFileDialog
package main

import (
    "io/ioutil"
    "os"

    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("File dialog")

    textEdit := widgets.NewQTextEdit(nil)
    window.SetCentralWidget(textEdit)
    window.StatusBar()

    var menu = window.MenuBar().AddMenu2("&File")

    var openIcon = gui.QIcon_FromTheme2("Open", gui.NewQIcon5("./res/open.png"))
    var open = menu.AddAction2(openIcon, "&Open")
    open.SetShortcuts2(gui.QKeySequence__Open)
    open.SetStatusTip("Open File")
    open.ConnectTriggered(func(bool) {
        var fileDialog = widgets.NewQFileDialog2(nil, "Open File...", "./res", "")
        fileDialog.SetAcceptMode(widgets.QFileDialog__AcceptOpen)
        fileDialog.SetFileMode(widgets.QFileDialog__ExistingFile)
        var mimeTypes = []string{"text/plain"}
        fileDialog.SetMimeTypeFilters(mimeTypes)
        if fileDialog.Exec() != int(widgets.QDialog__Accepted) {
            return
        }
        var fileName = fileDialog.SelectedFiles()[0]
        data, err := ioutil.ReadFile(fileName)
        if err != nil {
            panic(err)
        }
        textEdit.SetText(string(data))
    })

    var exitIcon = gui.QIcon_FromTheme2("Exit", gui.NewQIcon5("./res/exit.png"))
    var exit = menu.AddAction2(exitIcon, "&Exit")
    exit.SetShortcuts2(gui.QKeySequence__Close)
    exit.SetStatusTip("Exit application")
    exit.ConnectTriggered(func(bool) {
        app.QuitDefault()
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
