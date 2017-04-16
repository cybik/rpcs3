#ifdef QT_UI

#include <QCheckBox>
#include <QGroupBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QAction>

#include "stdafx.h"
//TODO #include "rpcs3.h"
//#include "KeyboardPadHandler.h"
#include "padsettingsdialog.h"

#define PADBUTTONWIDTH 100

//TODO Set up the buttons
PadSettingsDialog::PadSettingsDialog(QWidget *parent) : QDialog(parent)
{
    // Left Analog Stick
		QGroupBox *roundStickL = new QGroupBox(tr("Left Analog Stick"));
		QVBoxLayout *roundStickLVBox = new QVBoxLayout;
		QHBoxLayout *roundStickLHBox1 = new QHBoxLayout;
		QHBoxLayout *roundStickLHBox2 = new QHBoxLayout;
		QHBoxLayout *roundStickLHBox3 = new QHBoxLayout;
		QPushButton *roundStickLUp = new QPushButton(tr("W"));
		QPushButton *roundStickLLeft = new QPushButton(tr("A"));
		QPushButton *roundStickLRight = new QPushButton(tr("D"));
		QPushButton *roundStickLDown = new QPushButton(tr("S"));
		roundStickLHBox1->addWidget(roundStickLUp);
		roundStickLHBox2->addWidget(roundStickLLeft);
		roundStickLHBox2->addWidget(roundStickLRight);
		roundStickLHBox3->addWidget(roundStickLDown);
		roundStickLVBox->addLayout(roundStickLHBox1);
		roundStickLVBox->addLayout(roundStickLHBox2);
		roundStickLVBox->addLayout(roundStickLHBox3);
		roundStickL->setLayout(roundStickLVBox);
		roundStickLUp->setMaximumWidth(PADBUTTONWIDTH);
		roundStickLLeft->setMaximumWidth(PADBUTTONWIDTH);
		roundStickLRight->setMaximumWidth(PADBUTTONWIDTH);
		roundStickLDown->setMaximumWidth(PADBUTTONWIDTH);

    // D-Pad
    QGroupBox *roundPadControls = new QGroupBox(tr("D-Pad"));
		QVBoxLayout *roundPadControlsVBox = new QVBoxLayout;
		QHBoxLayout *roundPadControlsHBox1 = new QHBoxLayout;
		QHBoxLayout *roundPadControlsHBox2 = new QHBoxLayout;
		QHBoxLayout *roundPadControlsHBox3 = new QHBoxLayout;
		QPushButton *roundPadControlsUp = new QPushButton(tr("Up"));
		QPushButton *roundPadControlsLeft = new QPushButton(tr("Left"));
		QPushButton *roundPadControlsRight = new QPushButton(tr("Right"));
		QPushButton *roundPadControlsDown = new QPushButton(tr("Down"));
		roundPadControlsHBox1->addWidget(roundPadControlsUp);
		roundPadControlsHBox2->addWidget(roundPadControlsLeft);
		roundPadControlsHBox2->addWidget(roundPadControlsRight);
		roundPadControlsHBox3->addWidget(roundPadControlsDown);
		roundPadControlsVBox->addLayout(roundPadControlsHBox1);
		roundPadControlsVBox->addLayout(roundPadControlsHBox2);
		roundPadControlsVBox->addLayout(roundPadControlsHBox3);
		roundPadControls->setLayout(roundPadControlsVBox);
		roundPadControlsUp->setMaximumWidth(PADBUTTONWIDTH);
		roundPadControlsLeft->setMaximumWidth(PADBUTTONWIDTH);
		roundPadControlsRight->setMaximumWidth(PADBUTTONWIDTH);
		roundPadControlsDown->setMaximumWidth(PADBUTTONWIDTH);

		// Left Shifts
		QGroupBox *roundPadShiftsL = new QGroupBox(tr("Left Shifts"));
		QGroupBox *roundPadL1 = new QGroupBox(tr("L1"));
		QGroupBox *roundPadL2 = new QGroupBox(tr("L2"));
		QGroupBox *roundPadL3 = new QGroupBox(tr("L3"));
		QVBoxLayout *roundPadShiftsLVbox = new QVBoxLayout;
		QVBoxLayout *roundPadL1Vbox = new QVBoxLayout;
		QVBoxLayout *roundPadL2Vbox = new QVBoxLayout;
		QVBoxLayout *roundPadL3Vbox = new QVBoxLayout;
		QPushButton *roundPadL1Button = new QPushButton(tr("Q"));
		QPushButton *roundPadL2Button = new QPushButton(tr("R"));
		QPushButton *roundPadL3Button = new QPushButton(tr("F"));
		roundPadL1Vbox->addWidget(roundPadL1Button);
		roundPadL2Vbox->addWidget(roundPadL2Button);
		roundPadL3Vbox->addWidget(roundPadL3Button);
		roundPadL1->setLayout(roundPadL1Vbox);
		roundPadL2->setLayout(roundPadL2Vbox);
		roundPadL3->setLayout(roundPadL3Vbox);
		roundPadShiftsLVbox->addWidget(roundPadL1);
		roundPadShiftsLVbox->addWidget(roundPadL2);
		roundPadShiftsLVbox->addWidget(roundPadL3);
		roundPadShiftsL->setLayout(roundPadShiftsLVbox);
		roundPadL1Button->setMaximumWidth(PADBUTTONWIDTH);
		roundPadL2Button->setMaximumWidth(PADBUTTONWIDTH);
		roundPadL3Button->setMaximumWidth(PADBUTTONWIDTH);

    // Start / Select
    QGroupBox *roundPadSystem = new QGroupBox(tr("System"));
    QGroupBox *roundPadSelect = new QGroupBox(tr("Select"));
    QGroupBox *roundPadStart = new QGroupBox(tr("Start"));
		QVBoxLayout *roundPadSystemVbox = new QVBoxLayout;
		QVBoxLayout *roundPadSelectVbox = new QVBoxLayout;
		QVBoxLayout *roundPadStartVbox = new QVBoxLayout;
		QPushButton *roundPadSelectButton = new QPushButton(tr("Space"));
		QPushButton *roundPadStartButton = new QPushButton(tr("Enter"));
		roundPadSelectVbox->addWidget(roundPadSelectButton);
		roundPadStartVbox->addWidget(roundPadStartButton);
		roundPadSelect->setLayout(roundPadSelectVbox);
		roundPadStart->setLayout(roundPadStartVbox);
		roundPadSystemVbox->addWidget(roundPadSelect);
		roundPadSystemVbox->addWidget(roundPadStart);
		roundPadSystem->setLayout(roundPadSystemVbox);
		roundPadSelectButton->setMaximumWidth(PADBUTTONWIDTH);
		roundPadStartButton->setMaximumWidth(PADBUTTONWIDTH);

    // Right Shifts
    QGroupBox *roundPadShiftsR = new QGroupBox(tr("Right Shifts"));
    QGroupBox *roundPadR1 = new QGroupBox(tr("R1"));
    QGroupBox *roundPadR2 = new QGroupBox(tr("R2"));
    QGroupBox *roundPadR3 = new QGroupBox(tr("R3"));
		QVBoxLayout *roundPadShiftsRVbox = new QVBoxLayout;
		QVBoxLayout *roundPadR1Vbox = new QVBoxLayout;
		QVBoxLayout *roundPadR2Vbox = new QVBoxLayout;
		QVBoxLayout *roundPadR3Vbox = new QVBoxLayout;
		QPushButton *roundPadR1Button = new QPushButton(tr("E"));
		QPushButton *roundPadR2Button = new QPushButton(tr("T"));
		QPushButton *roundPadR3Button = new QPushButton(tr("G"));
		roundPadR1Vbox->addWidget(roundPadR1Button);
		roundPadR2Vbox->addWidget(roundPadR2Button);
		roundPadR3Vbox->addWidget(roundPadR3Button);
		roundPadR1->setLayout(roundPadR1Vbox);
		roundPadR2->setLayout(roundPadR2Vbox);
		roundPadR3->setLayout(roundPadR3Vbox);
    roundPadShiftsRVbox->addWidget(roundPadR1);
    roundPadShiftsRVbox->addWidget(roundPadR2);
    roundPadShiftsRVbox->addWidget(roundPadR3);
    roundPadShiftsR->setLayout(roundPadShiftsRVbox);
		roundPadR1Button->setMaximumWidth(PADBUTTONWIDTH);
		roundPadR2Button->setMaximumWidth(PADBUTTONWIDTH);
		roundPadR3Button->setMaximumWidth(PADBUTTONWIDTH);

    // Action buttons
		QGroupBox *roundPadButtons = new QGroupBox(tr("Buttons"));
		QGroupBox *roundPadSquare = new QGroupBox(tr("Square"));
		QGroupBox *roundPadCross = new QGroupBox(tr("Cross"));
		QGroupBox *roundPadCircle = new QGroupBox(tr("Circle"));
		QGroupBox *roundPadTriangle = new QGroupBox(tr("Triangle"));
		QVBoxLayout *roundPadButtonsVBox = new QVBoxLayout;
		QHBoxLayout *roundPadButtonsHBox1 = new QHBoxLayout;
		QHBoxLayout *roundPadButtonsHBox2 = new QHBoxLayout;
		QHBoxLayout *roundPadButtonsHBox3 = new QHBoxLayout;
		QHBoxLayout *roundPadButtonsVBox21 = new QHBoxLayout;
		QHBoxLayout *roundPadButtonsVBox22 = new QHBoxLayout;
		QHBoxLayout *roundPadButtonsVBox23 = new QHBoxLayout;
		QHBoxLayout *roundPadButtonsVBox24 = new QHBoxLayout;
		QPushButton *roundPadButtonsUp = new QPushButton(tr("V"));
		QPushButton *roundPadButtonsLeft = new QPushButton(tr("Z"));
		QPushButton *roundPadButtonsRight = new QPushButton(tr("C"));
		QPushButton *roundPadButtonsDown = new QPushButton(tr("X"));
		roundPadButtonsVBox21->addWidget(roundPadButtonsUp);
		roundPadButtonsVBox22->addWidget(roundPadButtonsLeft);
		roundPadButtonsVBox23->addWidget(roundPadButtonsRight);
		roundPadButtonsVBox24->addWidget(roundPadButtonsDown);
		roundPadTriangle->setLayout(roundPadButtonsVBox21);
		roundPadSquare->setLayout(roundPadButtonsVBox22);
		roundPadCircle->setLayout(roundPadButtonsVBox23);
		roundPadCross->setLayout(roundPadButtonsVBox24);
		roundPadButtonsHBox1->addWidget(roundPadTriangle);
		roundPadButtonsHBox2->addWidget(roundPadSquare);
		roundPadButtonsHBox2->addWidget(roundPadCircle);
		roundPadButtonsHBox3->addWidget(roundPadCross);
		roundPadButtonsVBox->addLayout(roundPadButtonsHBox1);
		roundPadButtonsVBox->addLayout(roundPadButtonsHBox2);
		roundPadButtonsVBox->addLayout(roundPadButtonsHBox3);
		roundPadButtons->setLayout(roundPadButtonsVBox);
		roundPadButtonsUp->setMaximumWidth(PADBUTTONWIDTH);
		roundPadButtonsLeft->setMaximumWidth(PADBUTTONWIDTH);
		roundPadButtonsRight->setMaximumWidth(PADBUTTONWIDTH);
		roundPadButtonsDown->setMaximumWidth(PADBUTTONWIDTH);

    // Right Analog Stick
    QGroupBox *roundStickR = new QGroupBox(tr("Right Analog Stick"));
		QVBoxLayout *roundStickRVBox = new QVBoxLayout;
		QHBoxLayout *roundStickRHBox1 = new QHBoxLayout;
		QHBoxLayout *roundStickRHBox2 = new QHBoxLayout;
		QHBoxLayout *roundStickRHBox3 = new QHBoxLayout;
		QPushButton *roundStickRUp = new QPushButton(tr("PgUp"));
		QPushButton *roundStickRLeft = new QPushButton(tr("Home"));
		QPushButton *roundStickRRight = new QPushButton(tr("End"));
		QPushButton *roundStickRDown = new QPushButton(tr("PgDown"));		
		roundStickRHBox1->addWidget(roundStickRUp);
		roundStickRHBox2->addWidget(roundStickRLeft);
		roundStickRHBox2->addWidget(roundStickRRight);
		roundStickRHBox3->addWidget(roundStickRDown);
		roundStickRVBox->addLayout(roundStickRHBox1);
		roundStickRVBox->addLayout(roundStickRHBox2);
		roundStickRVBox->addLayout(roundStickRHBox3);
		roundStickR->setLayout(roundStickRVBox);
		roundStickRUp->setMaximumWidth(PADBUTTONWIDTH);
		roundStickRLeft->setMaximumWidth(PADBUTTONWIDTH);
		roundStickRRight->setMaximumWidth(PADBUTTONWIDTH);
		roundStickRDown->setMaximumWidth(PADBUTTONWIDTH);

    // Buttons
    QPushButton *defaultButton = new QPushButton(tr("By default"));

    QPushButton *okButton = new QPushButton(tr("OK"));
    connect(okButton, &QAbstractButton::clicked, this, &QDialog::accept);

    QPushButton *cancelButton = new QPushButton(tr("Cancel"));
    cancelButton->setDefault(true);
    connect(cancelButton, &QAbstractButton::clicked, this, &QWidget::close);

    // Main layout
    QHBoxLayout *hbox1 = new QHBoxLayout;
    hbox1->addWidget(roundStickL);
    hbox1->addWidget(roundPadControls);
    hbox1->addWidget(roundPadShiftsL);
    hbox1->addWidget(roundPadSystem);
    hbox1->addWidget(roundPadShiftsR);
    hbox1->addWidget(roundPadButtons);
    hbox1->addWidget(roundStickR);

    QHBoxLayout *hbox2 = new QHBoxLayout;
    hbox2->addWidget(defaultButton);
    hbox2->addStretch();
    hbox2->addWidget(okButton);
    hbox2->addWidget(cancelButton);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addLayout(hbox1);
    vbox->addLayout(hbox2);
    setLayout(vbox);

    setWindowTitle(tr("PAD Settings"));
}

void PadSettingsDialog::OnKeyDown(QKeyEvent *keyEvent)
{
	m_key_pressed = true;

	switch (m_button_id)
	{
//TODO should work with g_kbpad_config linked
	//case id_pad_lstick_left: g_kbpad_config.left_stick_left = keyEvent->key(); break;
	//case id_pad_lstick_down: g_kbpad_config.left_stick_down = keyEvent->key(); break;
	//case id_pad_lstick_right: g_kbpad_config.left_stick_right = keyEvent->key(); break;
	//case id_pad_lstick_up: g_kbpad_config.left_stick_up = keyEvent->key(); break;
	//
	//case id_pad_left: g_kbpad_config.left = keyEvent->key(); break;
	//case id_pad_down: g_kbpad_config.down = keyEvent->key(); break;
	//case id_pad_right: g_kbpad_config.right = keyEvent->key(); break;
	//case id_pad_up: g_kbpad_config.up = keyEvent->key(); break;
	//
	//case id_pad_l1: g_kbpad_config.l1 = keyEvent->key(); break;
	//case id_pad_l2: g_kbpad_config.l2 = keyEvent->key(); break;
	//case id_pad_l3: g_kbpad_config.l3 = keyEvent->key(); break;
	//
	//case id_pad_start: g_kbpad_config.start = keyEvent->key(); break;
	//case id_pad_select: g_kbpad_config.select = keyEvent->key(); break;
	//
	//case id_pad_r1: g_kbpad_config.r1 = keyEvent->key(); break;
	//case id_pad_r2: g_kbpad_config.r2 = keyEvent->key(); break;
	//case id_pad_r3: g_kbpad_config.r3 = keyEvent->key(); break;
	//
	//case id_pad_square: g_kbpad_config.square = keyEvent->key(); break;
	//case id_pad_cross: g_kbpad_config.cross = keyEvent->key(); break;
	//case id_pad_circle: g_kbpad_config.circle = keyEvent->key(); break;
	//case id_pad_triangle: g_kbpad_config.triangle = keyEvent->key(); break;
	//
	//case id_pad_rstick_left: g_kbpad_config.right_stick_left = keyEvent->key(); break;
	//case id_pad_rstick_down: g_kbpad_config.right_stick_down = keyEvent->key(); break;
	//case id_pad_rstick_right: g_kbpad_config.right_stick_right = keyEvent->key(); break;
	//case id_pad_rstick_up: g_kbpad_config.right_stick_up = keyEvent->key(); break;

	case 0: break;
	default: LOG_ERROR(HLE, "Unknown button ID: %d", m_button_id); break;
	}

	UpdateLabel();
//TODO?	//keyEvent.Skip(); //?
}

void PadSettingsDialog::OnKeyUp(QKeyEvent *keyEvent)
{
	SwitchButtons(true);  // enable all buttons
	m_button_id = 0; // reset current button id
	m_key_pressed = false;
//TODO?	//keyEvent.Skip(); //?
}

//TODO
void PadSettingsDialog::OnButtonClicked()
{
	//if (sender() != id_reset_parameters)
	//{
	//	m_button_id = sender();
	//	SwitchButtons(false); // disable all buttons, needed for using Space, Enter and other specific buttons
	//												//RunTimer(3, event.GetId()); // TODO: Currently, timer disabled. Use by later, have some strange problems
	//												//SwitchButtons(true); // needed, if timer enabled
	//	UpdateLabel();
	//}
	//
	//else
	//{
	//	switch (sender())
	//	{
	//	case id_reset_parameters: ResetParameters(); UpdateLabel(); break;
	//	case id_ok: g_kbpad_config.save(); break;
	//	case id_cancel: break;
	//
	//	default: LOG_ERROR(HLE, "Unknown button ID: %d", sender()); break;
	//	}
	//}
}

const QString PadSettingsDialog::GetKeyName(const u32 keyCode)
{
	QString keyName;

	switch (keyCode)
	{
	case Qt::Key_unknown: LOG_ERROR(HLE, "Invalid key code"); keyName = "ERROR!"; break;
	case Qt::Key_Backspace: keyName = "BackSpace"; break;
	case Qt::Key_Tab: keyName = "Tab"; break;
	case Qt::Key_Enter: keyName = "Enter"; break;
	case Qt::Key_Escape: keyName = "Esc"; break;
	case Qt::Key_Space: keyName = "Space"; break;
	case Qt::Key_Delete: keyName = "Delete"; break;
	case Qt::Key_Shift: keyName = "Shift"; break;
	case Qt::Key_Alt: keyName = "ALT"; break;
	case Qt::Key_Control: keyName = "CTRL"; break;
	case Qt::Key_Pause: keyName = "Pause"; break;
	case Qt::Key_CapsLock: keyName = "CapsLock"; break;
	case Qt::Key_End: keyName = "End"; break;
	case Qt::Key_Home: keyName = "Home"; break;
	case Qt::Key_Left: keyName = "Left"; break;
	case Qt::Key_Up: keyName = "Up"; break;
	case Qt::Key_Right: keyName = "Right"; break;
	case Qt::Key_Down: keyName = "Down"; break;
	case Qt::Key_Select: keyName = "Select"; break;
	case Qt::Key_Print: keyName = "Print"; break;
//TODO
	//case Qt::Key_: keyName = "Snapshot"; break;
	case Qt::Key_Insert: keyName = "Insert"; break;
	//case Qt::Key_: keyName = "Num0"; break;
	//case Qt::Key_: keyName = "Num1"; break;
	//case Qt::Key_: keyName = "Num2"; break;
	//case Qt::Key_: keyName = "Num3"; break;
	//case Qt::Key_: keyName = "Num4"; break;
	//case Qt::Key_: keyName = "Num5"; break;
	//case Qt::Key_: keyName = "Num6"; break;
	//case Qt::Key_: keyName = "Num7"; break;
	//case Qt::Key_: keyName = "Num8"; break;
	//case Qt::Key_: keyName = "Num9"; break;
	case Qt::Key_F1: keyName = "F1"; break;
	case Qt::Key_F2: keyName = "F2"; break;
	case Qt::Key_F3: keyName = "F3"; break;
	case Qt::Key_F4: keyName = "F4"; break;
	case Qt::Key_F5: keyName = "F5"; break;
	case Qt::Key_F6: keyName = "F6"; break;
	case Qt::Key_F7: keyName = "F7"; break;
	case Qt::Key_F8: keyName = "F8"; break;
	case Qt::Key_F9: keyName = "F9"; break;
	case Qt::Key_F10: keyName = "F10"; break;
	case Qt::Key_F11: keyName = "F11"; break;
	case Qt::Key_F12: keyName = "F12"; break;
	case Qt::Key_NumLock: keyName = "NumLock"; break;
	case Qt::Key_ScrollLock: keyName = "ScrollLock"; break;
	case Qt::Key_PageUp: keyName = "PgUp"; break;
	case Qt::Key_PageDown: keyName = "PgDn"; break;
//TODO
	//case Qt::Key_MPAD_SPACE: keyName = "NumSpace"; break
	//case Qt::Key_MPAD_TAB: keyName = "NumTab"; break;
	//case Qt::Key_MPAD_ENTER: keyName = "NumEnter"; break;
	//case Qt::Key_MPAD_HOME: keyName = "NumHome"; break;
	//case Qt::Key_MPAD_LEFT: keyName = "NumLeft"; break;
	//case Qt::Key_MPAD_UP: keyName = "NumUp"; break;
	//case Qt::Key_MPAD_RIGHT: keyName = "NumRight"; break;
	//case Qt::Key_MPAD_DOWN: keyName = "NumDown"; break;
	//case Qt::Key_MPAD_PAGEUP: keyName = "NumPgUp"; break;
	//case Qt::Key_MPAD_PAGEDOWN: keyName = "NumPgDn"; break;
	//case Qt::Key_MPAD_END: keyName = "NumEnd"; break;
	//case Qt::Key_MPAD_BEGIN: keyName = "NumHome"; break;
	//case Qt::Key_MPAD_INSERT: keyName = "NumIns"; break;
	//case Qt::Key_MPAD_DELETE: keyName = "NumDel"; break;

	default: keyName = static_cast<char>(keyCode); break;
	}

	return keyName;
}

void PadSettingsDialog::UpdateLabel()
{
	// Get button labels from .ini

//TODO should work with g_kbpad_config linked
	//b_up_lstick->setText(GetKeyName(g_kbpad_config.left_stick_up));
	//b_down_lstick->setText(GetKeyName(g_kbpad_config.left_stick_down));
	//b_left_lstick->setText(GetKeyName(g_kbpad_config.left_stick_left));
	//b_right_lstick->setText(GetKeyName(g_kbpad_config.left_stick_right));
	//
	//b_up->setText(GetKeyName(g_kbpad_config.up));
	//b_down->setText(GetKeyName(g_kbpad_config.down));
	//b_left->setText(GetKeyName(g_kbpad_config.left));
	//b_right->setText(GetKeyName(g_kbpad_config.right));
	//
	//b_shift_l1->setText(GetKeyName(g_kbpad_config.l1));
	//b_shift_l2->setText(GetKeyName(g_kbpad_config.l2));
	//b_shift_l3->setText(GetKeyName(g_kbpad_config.l3));
	//
	//b_start->setText(GetKeyName(g_kbpad_config.start));
	//b_select->setText(GetKeyName(g_kbpad_config.select));
	//
	//b_shift_r1->setText(GetKeyName(g_kbpad_config.r1));
	//b_shift_r2->setText(GetKeyName(g_kbpad_config.r2));
	//b_shift_r3->setText(GetKeyName(g_kbpad_config.r3));
	//
	//b_square->setText(GetKeyName(g_kbpad_config.square));
	//b_cross->setText(GetKeyName(g_kbpad_config.cross));
	//b_circle->setText(GetKeyName(g_kbpad_config.circle));
	//b_triangle->setText(GetKeyName(g_kbpad_config.triangle));
	//
	//b_up_rstick->setText(GetKeyName(g_kbpad_config.right_stick_up));
	//b_down_rstick->setText(GetKeyName(g_kbpad_config.right_stick_down));
	//b_left_rstick->setText(GetKeyName(g_kbpad_config.right_stick_left));
	//b_right_rstick->setText(GetKeyName(g_kbpad_config.right_stick_right));
}

void PadSettingsDialog::ResetParameters()
{
//TODO should work with g_kbpad_config linked
	//g_kbpad_config.left_stick_up = g_kbpad_config.left_stick_up.def;
	//g_kbpad_config.left_stick_down = g_kbpad_config.left_stick_down.def;
	//g_kbpad_config.left_stick_left = g_kbpad_config.left_stick_left.def;
	//g_kbpad_config.left_stick_right = g_kbpad_config.left_stick_right.def;
	//
	//g_kbpad_config.up = g_kbpad_config.up.def;
	//g_kbpad_config.down = g_kbpad_config.down.def;
	//g_kbpad_config.left = g_kbpad_config.left.def;
	//g_kbpad_config.right = g_kbpad_config.right.def;
	//
	//g_kbpad_config.l1 = g_kbpad_config.l1.def;
	//g_kbpad_config.l2 = g_kbpad_config.l2.def;
	//g_kbpad_config.l3 = g_kbpad_config.l3.def;
	//
	//g_kbpad_config.start = g_kbpad_config.start.def;
	//g_kbpad_config.select = g_kbpad_config.select.def;
	//
	//g_kbpad_config.r1 = g_kbpad_config.r1.def;
	//g_kbpad_config.r2 = g_kbpad_config.r2.def;
	//g_kbpad_config.r3 = g_kbpad_config.r3.def;
	//
	//g_kbpad_config.square = g_kbpad_config.square.def;
	//g_kbpad_config.cross = g_kbpad_config.cross.def;
	//g_kbpad_config.circle = g_kbpad_config.circle.def;
	//g_kbpad_config.triangle = g_kbpad_config.triangle.def;
	//
	//g_kbpad_config.right_stick_up = g_kbpad_config.right_stick_up.def;
	//g_kbpad_config.right_stick_down = g_kbpad_config.right_stick_down.def;
	//g_kbpad_config.right_stick_left = g_kbpad_config.right_stick_left.def;
	//g_kbpad_config.right_stick_right = g_kbpad_config.right_stick_right.def;
}

void PadSettingsDialog::UpdateTimerLabel(const u32 id)
{
	switch (id)
	{
	case id_pad_lstick_left: b_left_lstick->setText(QString::number(m_seconds + 47)); break;
	case id_pad_lstick_down: b_down_lstick->setText(QString::number(m_seconds + 47)); break;
	case id_pad_lstick_right: b_right_lstick->setText(QString::number(m_seconds + 47)); break;
	case id_pad_lstick_up: b_up_lstick->setText(QString::number(m_seconds + 47)); break;

	case id_pad_left: b_left->setText(QString::number(m_seconds + 47)); break;
	case id_pad_down: b_down->setText(QString::number(m_seconds + 47)); break;
	case id_pad_right: b_right->setText(QString::number(m_seconds + 47)); break;
	case id_pad_up: b_up->setText(QString::number(m_seconds + 47)); break;

	case id_pad_l1: b_shift_l1->setText(QString::number(m_seconds + 47)); break;
	case id_pad_l2: b_shift_l2->setText(QString::number(m_seconds + 47)); break;
	case id_pad_l3: b_shift_l3->setText(QString::number(m_seconds + 47)); break;

	case id_pad_start: b_start->setText(QString::number(m_seconds + 47)); break;
	case id_pad_select: b_select->setText(QString::number(m_seconds + 47)); break;

	case id_pad_r1: b_shift_r1->setText(QString::number(m_seconds + 47)); break;
	case id_pad_r2: b_shift_r2->setText(QString::number(m_seconds + 47)); break;
	case id_pad_r3: b_shift_r3->setText(QString::number(m_seconds + 47)); break;

	case id_pad_square: b_square->setText(QString::number(m_seconds + 47)); break;
	case id_pad_cross: b_cross->setText(QString::number(m_seconds + 47)); break;
	case id_pad_circle: b_circle->setText(QString::number(m_seconds + 47)); break;
	case id_pad_triangle: b_triangle->setText(QString::number(m_seconds + 47)); break;

	case id_pad_rstick_left: b_left_rstick->setText(QString::number(m_seconds + 47)); break;
	case id_pad_rstick_down: b_down_rstick->setText(QString::number(m_seconds + 47)); break;
	case id_pad_rstick_right: b_right_rstick->setText(QString::number(m_seconds + 47)); break;
	case id_pad_rstick_up: b_up_rstick->setText(QString::number(m_seconds + 47)); break;

	default: LOG_ERROR(HLE, "Unknown button ID: %d", id); break;
	}
}

void PadSettingsDialog::SwitchButtons(const bool IsEnabled)
{
	b_up_lstick->setEnabled(IsEnabled);
	b_down_lstick->setEnabled(IsEnabled);
	b_left_lstick->setEnabled(IsEnabled);
	b_right_lstick->setEnabled(IsEnabled);

	b_up->setEnabled(IsEnabled);
	b_down->setEnabled(IsEnabled);
	b_left->setEnabled(IsEnabled);
	b_right->setEnabled(IsEnabled);

	b_shift_l1->setEnabled(IsEnabled);
	b_shift_l2->setEnabled(IsEnabled);
	b_shift_l3->setEnabled(IsEnabled);

	b_start->setEnabled(IsEnabled);
	b_select->setEnabled(IsEnabled);

	b_shift_r1->setEnabled(IsEnabled);
	b_shift_r2->setEnabled(IsEnabled);
	b_shift_r3->setEnabled(IsEnabled);

	b_square->setEnabled(IsEnabled);
	b_cross->setEnabled(IsEnabled);
	b_circle->setEnabled(IsEnabled);
	b_triangle->setEnabled(IsEnabled);

	b_up_rstick->setEnabled(IsEnabled);
	b_down_rstick->setEnabled(IsEnabled);
	b_left_rstick->setEnabled(IsEnabled);
	b_right_rstick->setEnabled(IsEnabled);

	b_ok->setEnabled(IsEnabled);
	b_cancel->setEnabled(IsEnabled);
	b_reset->setEnabled(IsEnabled);
}

// TODO: rewrite with std::chrono or wxTimer
#include <time.h>

void PadSettingsDialog::RunTimer(const u32 seconds, const u32 id)
{
	m_seconds = seconds;
	clock_t t1, t2;
	t1 = t2 = clock() / CLOCKS_PER_SEC;
	while (m_seconds)
	{
		if (t1 / CLOCKS_PER_SEC + 1 <= (t2 = clock()) / CLOCKS_PER_SEC)
		{
			UpdateTimerLabel(id);
			m_seconds--;
			t1 = t2;
		}

		if (m_key_pressed)
		{
			m_seconds = 0;
			break;
		}
	}
}

#endif // QT_UI
