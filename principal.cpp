#include "principal.h"
#include "ui_principal.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);

 //* ESTILOS*//

QPixmap pix("C:/Users/crep_/OneDrive/Documentos/cansatPEU/uno.png");
QPixmap pix1("C:/Users/crep_/OneDrive/Documentos/cansatPEU/dos.png");
QPixmap pix2("C:/Users/crep_/OneDrive/Documentos/cansatPEU/tres.png");
QPixmap pix3("C:/Users/crep_/OneDrive/Documentos/cansatPEU/US.png");
QPixmap pix4("C:/Users/crep_/OneDrive/Documentos/cansatPEU/mapa.png");

ui->label_9->setPixmap(pix.scaled(64,64,Qt::KeepAspectRatio));
ui->label_10->setPixmap(pix1.scaled(64,64,Qt::KeepAspectRatio));
ui->label_11->setPixmap(pix2.scaled(64,64,Qt::KeepAspectRatio));
ui->label_8->setPixmap(pix3.scaled(160,160,Qt::KeepAspectRatio));
ui->label_17->setPixmap(pix4.scaled(64,64,Qt::KeepAspectRatio));
ui->label_7->setStyleSheet("background-color:white");

//contenedores
ui->widget->setStyleSheet("background-color:white");
ui->widget_2->setStyleSheet("background-color:white");
ui->widget_3->setStyleSheet("background-color:white");
ui->widget_4->setStyleSheet("background-color:white");
ui->widget_6->setStyleSheet("background-color:white");

//imagenes botones
ui->pushButton->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/encender.png"));
ui->pushButton_2->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/pausa.png"));
ui->pushButton_3->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/reinicar.png"));
ui->pushButton_4->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/guardar.png"));
ui->pushButton_5->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/sincronizar.png"));
ui->pushButton_7->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/eliminar.png"));
ui->pushButton_6->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/cierre.png"));
ui->pushButton_8->setIcon(QIcon("C:/Users/crep_/OneDrive/Documentos/cansatPEU/conectar.png"));


//TABLA
ui->tableWidget->setColumnCount(14);
QStringList tableWidget;
tableWidget<<"ID"<<"Tiempo"<<"Presion"<<"Temperatura"<<"Altitud"<<"Velocidad"<<"Bateria"<<"Estado SW"<<"Acelera X"<<"Acelera Y"<<"Acelera Z"<<"Orientacion X"<<"Orientacion Y"<<"Orientacion Z";
ui->tableWidget->setHorizontalHeaderLabels(tableWidget);




}//principal

principal::~principal()
{
    delete ui;
}

void principal::on_pushButton_4_clicked()
{

}

