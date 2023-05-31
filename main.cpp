#include <QtWidgets>
#include <QDebug>
#include <QFile>

class MainWindow:public QMainWindow {
  public:
  MainWindow();
};

MainWindow::MainWindow() {
int widthWindow=700;
int heightWindow=200;
resize(widthWindow,heightWindow);
}
int main(int argc, char *argv[]) {
  QApplication app(argc,argv);
  MainWindow mainWin;
  mainWin.show();
  return app.exec();
}
