// QColorDialog
package main

import (
    "os"

    "github.com/therecipe/qt/core"
    "github.com/therecipe/qt/gui"
    "github.com/therecipe/qt/widgets"
)

func main() {

    app := widgets.NewQApplication(len(os.Args), os.Args)

    window := widgets.NewQMainWindow(nil, 0)
    window.SetWindowTitle("Color Dialog")

    // 색상 기본값 초기화 (파란색, 블랙인 경우 색상 변경시 명도(Value)를 올려주어야 함)
    stdcolor := gui.NewQColor3(0, 0, 255, 255)

    button := widgets.NewQPushButton2("Dialog", window)
    button.Move2(50, 50)

    // 파이썬 구문과 다르게 픽스맵으로 색상 프리뷰 구성
    pixmap := gui.NewQPixmap2(core.NewQSize2(200, 200))
    pixmap.Fill(stdcolor)

    colorFrame := widgets.NewQLabel2("", window, 0)
    colorFrame.SetPixmap(pixmap)
    colorFrame.SetGeometry2(200, 50, 200, 200)

    dialog := widgets.NewQColorDialog2(stdcolor, nil)
    // dialog.SetOption(widgets.QColorDialog__NoButtons, true)  // 컬러 다이얼로그 창의 확인 버튼 hide

    button.ConnectClicked(func(bool) {
        // dialog.SetCurrentColor(stdcolor) // 창이 열릴때 기본값으로 되돌림
        dialog.Show()
    })

    dialog.ConnectCurrentColorChanged(func(c *gui.QColor) {
        // pixmap := gui.NewQPixmap2(core.NewQSize2(200, 200))  // 재설정 필요 없음
        pixmap.Fill(c)
        colorFrame.SetPixmap(pixmap)
    })

    window.SetGeometry2(300, 300, 500, 400)
    window.Show()

    app.Exec()
}
