#pragma once

class Flasher
{
public:
    Flasher();
    Flasher(int p_pinDEL, int p_dureeAllumeeEteinte);
    Flasher(const Flasher& p_aCopier);
    Flasher& operator=(const Flasher& p_source);
    void faireClignoter(int p_nombreCycles);
private:
    int m_pinDEL;
    int m_dureeAllumeeEteinte;
};