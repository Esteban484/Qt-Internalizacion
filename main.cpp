#include "principal.h"

#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Obtener la configuracion local del sistema (idioma)
    //QString locale= QLocale::system().name();

    //Creando un objecto QLocale de Italiano de Italia
    QLocale ubicacion(QLocale::Russian, QLocale::Russia);
    QString locale= ubicacion.name();
    //Objeto para manejar traducciones
    QTranslator traduccion;

    traduccion.load(QString("Salario_")+locale);
    a.installTranslator(&traduccion);
    Principal w;
    w.show();
    return a.exec();
}

