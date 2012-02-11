#include "dices.h"
#include "ui_dices.h"

Dices::Dices(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dices)
{
    ui->setupUi(this);
}

Dices::~Dices()
{
    delete ui;
}

void Dices::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dices::on_pushButtonValider_clicked()
{
    QString final, transfo;
    int i, buffer;
    int nbDices, nbFaces;

    randomize random;
    nbDices = ui->comboBoxNbDices->currentText().toInt();
    nbFaces = ui->comboBoxNbFaces->currentText().toInt();

    for(i=0;i<nbDices;i++){
        buffer = 0;
        buffer = random.random(1, nbFaces);
        final += "De numero ";
        transfo.setNum(i+1);
        final += transfo;
        final += " :  ";
        transfo.setNum(buffer);
        final += transfo;
        final += "    ";
        if((i%2) == 1){
            final += "\n";
        }
    }
    ui->textEditResultat->setText(final);
}
