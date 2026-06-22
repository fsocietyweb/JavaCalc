#include <QApplication>
#include <QWebEngineView>
#include <QUrl>
#include <QDir>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Erstellt das native Fenster, das Webinhalte anzeigen kann
    QWebEngineView *view = new QWebEngineView();

    // Sucht den Ordner "Assets" direkt dort, wo auch die JavaCalc-App liegt
    QString pfad = QCoreApplication::applicationDirPath() + "/Assets/index.html";
    view->setUrl(QUrl::fromLocalFile(pfad));

    // Fenster-Einstellungen
    view->setWindowTitle("JavaCalc");
    view->resize(360, 480);
    view->show();

    return app.exec();
}
