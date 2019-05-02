# -*- coding: utf-8 -*-
# Form implementation generated from reading ui file 'mapa.ui'
#
try:
    from PySide import QtCore
    from PySide import QtWidgets
    from PySide import QtQuick
except:
    from PyQt5.QtCore import pyqtSlot as Slot
    from PyQt5 import QtCore
    from PyQt5 import QtWidgets
    from PyQt5 import QtQuick


class codePy:
    def __init__(self):


      def setupUi(self, Dialog):
                Dialog.setObjectName(_fromUtf8("Dialog"))
                Dialog.resize(596, 342)
                self.webView = QtWebKit.QWebView(Dialog)
                self.webView.setGeometry(QtCore.QRect(170, 10, 421, 291))
                self.webView.setUrl(QtCore.QUrl(_fromUtf8("about:blank")))
                self.webView.setObjectName(_fromUtf8("webView"))
                self.pushButton = QtGui.QPushButton(Dialog)
                self.pushButton.setGeometry(QtCore.QRect(30, 120, 75, 23))
                self.pushButton.setObjectName(_fromUtf8("pushButton"))
                self.lineEdit = QtGui.QLineEdit(Dialog)
                self.lineEdit.setGeometry(QtCore.QRect(10, 30, 151, 20))
                self.lineEdit.setObjectName(_fromUtf8("lineEdit"))
                self.lineEdit_2 = QtGui.QLineEdit(Dialog)
                self.lineEdit_2.setGeometry(QtCore.QRect(10, 80, 151, 20))
                self.lineEdit_2.setObjectName(_fromUtf8("lineEdit_2"))
                self.label = QtGui.QLabel(Dialog)
                self.label.setGeometry(QtCore.QRect(15, 10, 71, 20))
                self.label.setObjectName(_fromUtf8("label"))
                self.label_2 = QtGui.QLabel(Dialog)
                self.label_2.setGeometry(QtCore.QRect(10, 60, 61, 16))
                self.label_2.setObjectName(_fromUtf8("label_2"))
                self.pushButton_2 = QtGui.QPushButton(Dialog)
                self.pushButton_2.setGeometry(QtCore.QRect(510, 310, 75, 23))
                self.pushButton_2.setObjectName(_fromUtf8("pushButton_2"))
                self.pushButton_3 = QtGui.QPushButton(Dialog)
                self.pushButton_3.setGeometry(QtCore.QRect(430, 310, 75, 23))
                self.pushButton_3.setObjectName(_fromUtf8("pushButton_3"))

                self.retranslateUi(Dialog)
                QtCore.QMetaObject.connectSlotsByName(Dialog)

            def retranslateUi(self, Dialog):
                Dialog.setWindowTitle(_translate("Dialog", "Dialog", None))
                self.pushButton.setText(_translate("Dialog", "ENCONTRAR", None))
                self.label.setText(_translate("Dialog", "LATITUD:", None))
                self.label_2.setText(_translate("Dialog", "LONGITUD:", None))
                self.pushButton_2.setText(_translate("Dialog", "SALIR", None))
                self.pushButton_3.setText(_translate("Dialog", "REGRESAR", None))

        from PyQt4 import QtWebKit
