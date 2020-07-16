// QProgressBar
package main

import (
    "os"
    "time"

    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("QProgressBar")

    progressBar := widgets.NewQProgressBar(window)
    progressBar.SetGeometry2(50, 50, 400, 30)

    progressBar.SetMinimum(0)
    progressBar.SetMaximum(1000)
    progressBar.SetValue(0)

    button := widgets.NewQPushButton2("Start", window)
    button.Move2(50, 100)
    button.ConnectClicked(func(bool) {
        go func() {
            for range time.NewTicker(10 * time.Millisecond).C {
                progressBar.SetValue(progressBar.Value() + 1)
                if progressBar.Value() == progressBar.Maximum() {
                    button.SetText("Finished")
                    break
                } else {
                    button.SetText("Stop")
                }
            }
        }()
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
