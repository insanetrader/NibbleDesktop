// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2018-2019 Conceal Network & Conceal Devs
//  
// Copyright (c) 2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2018-2019 Conceal Network & Conceal Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QFrame>

class QAbstractButton;

namespace Ui {
class WelcomeFrame;
}

namespace WalletGui {

  class WelcomeFrame : public QFrame {
    Q_OBJECT

  public:
    WelcomeFrame(QWidget* _parent);
    ~WelcomeFrame();

    Q_SLOT void createWallet();
    Q_SLOT void openWallet();
    Q_SLOT void importSeed();  
    Q_SLOT void importsecretkeys();  
    Q_SLOT void importKey();
    Q_SLOT void nextOne();    
    Q_SLOT void nextTwo();    
    Q_SLOT void nextThree();        

  private:
    QScopedPointer<Ui::WelcomeFrame> m_ui;

  Q_SIGNALS:
    void createWalletClickedSignal();
    void openWalletClickedSignal(); 
    void importSeedClickedSignal();   
    void importsecretkeysClickedSignal();  
    void importKeyClickedSignal();  
  };

}
