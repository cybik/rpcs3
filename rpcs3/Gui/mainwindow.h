#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "logframe.h"
#include "debuggerframe.h"
#include "GameListFrame.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

signals:

private slots:
	void BootElf();
	void BootGame();
	void InstallPkg();
	void Pause();
	void Stop();
	void SendOpenSysMenu();
	void SendExit();
	void Settings();
	void PadSettings();
	void AutoPauseSettings();
	void VFSManager();
	void VHDDManager();
	void SaveData();
	void ELFCompiler();
	void CgDisasm();
	void KernelExplorer();
	void MemoryViewer();
	void RSXDebugger();
	void StringSearch();
	void DecryptSPRXLibraries();
	void ShowDebugFrame();
	void ShowLogFrame();
	void ShowGameListFrame();
	void OnDebugFrameClosed();
	void OnLogFrameClosed();
	void OnGameListFrameClosed();
	void About();

private:
	void CreateActions();
	void CreateMenus();
	void CreateDockWindows();

	// Actions
	QAction *bootElfAct;
	QAction *bootGameAct;
	QAction *bootInstallAct;
	QAction *sysPauseAct;
	QAction *sysStopAct;
	QAction *sysSendOpenMenuAct;
	QAction *sysSendExitAct;
	QAction *confSettingsAct;
	QAction *confPadAct;
	QAction *confAutopauseManagerAct;
	QAction *confVfsManagerAct;
	QAction *confVhddManagerAct;
	QAction *confSavedataManagerAct;
	QAction *toolsCompilerAct;
	QAction *toolsCgDisasmAct;
	QAction *toolsKernelExplorerAct;
	QAction *toolsMemoryViewerAct;
	QAction *toolsRsxDebuggerAct;
	QAction *toolsStringSearchAct;
	QAction *toolsSecryptSprxLibsAct;
	QAction *exitAct;
	QAction *showDebuggerAct;
	QAction *showLogAct;
	QAction *showGameListAct;
	QAction *aboutAct;
	QAction *aboutQtAct;

	// Dockable widget frames
	LogFrame *logFrame;
	DebuggerFrame *debuggerFrame;
	GameListFrame *gameListFrame;
};

#endif // MAINWINDOW_H
