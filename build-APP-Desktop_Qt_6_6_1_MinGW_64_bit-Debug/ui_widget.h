/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout;
    QLabel *Password;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_Login;
    QLabel *label_Picture2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(587, 253);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(180, 20, 391, 161));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Username = new QLabel(groupBox);
        Username->setObjectName("Username");

        horizontalLayout_2->addWidget(Username);

        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName("lineEdit_Username");

        horizontalLayout_2->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Password = new QLabel(groupBox);
        Password->setObjectName("Password");

        horizontalLayout->addWidget(Password);

        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 190, 401, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        label_Login = new QLabel(layoutWidget);
        label_Login->setObjectName("label_Login");

        horizontalLayout_3->addWidget(label_Login);

        label_Picture2 = new QLabel(Widget);
        label_Picture2->setObjectName("label_Picture2");
        label_Picture2->setGeometry(QRect(4, 25, 161, 181));
        label_Picture2->setPixmap(QPixmap(QString::fromUtf8(":/Ressourses/Picture/emsi.png")));
        label_Picture2->setScaledContents(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "SingIn", nullptr));
        Username->setText(QCoreApplication::translate("Widget", "Username", nullptr));
        Password->setText(QCoreApplication::translate("Widget", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        label->setText(QCoreApplication::translate("Widget", "  Status ++ ", nullptr));
        label_Login->setText(QCoreApplication::translate("Widget", "Statue : ++", nullptr));
        label_Picture2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
