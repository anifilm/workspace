import sys
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *


class MyWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setGeometry(100, 200, 300, 400)
        self.setWindowTitle("PyQt")
        self.setWindowIcon(QIcon("icon.png"))

        btn = QPushButton("버튼1", self)
        btn.move(10, 10)

        btn2 = QPushButton("버튼2", self)
        btn2.move(10, 40)


app = QApplication(sys.argv)
window = MyWindow()
window.show()
app.exec_()
