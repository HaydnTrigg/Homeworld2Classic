#if 0
#ifndef __ERRORMESSAGE_H__
#define __ERRORMESSAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ErrorMessage :
    public UI::NewUIScreen
{
public:
    ErrorMessage(UI::ErrorMessage const &); /* compiler_generated() */
    ErrorMessage(char const *);
    virtual ~ErrorMessage() override;
    void DisconnectSlots();
    void ConnectOnAccept(void (*)(UI::InterfaceElement *));
    void AddMoreInfo(UI::InterfaceElement *);
    void RemoveMoreInfo(UI::InterfaceElement *);
    UI::InterfaceElement *GetMoreInfoChild(char const *);
    UI::Size GetMoreInfoSize() const;
    static UI::ErrorMessage *GetScreen();
    static void Show(wchar_t const *message, unsigned __int32 showFlags, char const *msgName);
    static void ShowFromStringTable(char const *stringName, unsigned __int32 showFlags);
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    boost::scoped_ptr<UI::ErrorMessageData> m_pimpl; // 0x19C
    void SetState(unsigned __int32, bool);
    void SetProfile();
    void ShowNextMessage();
    void Accept();
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    static void OnMoreInfoClicked(UI::InterfaceElement *btn);
public:
    UI::ErrorMessage &operator=(UI::ErrorMessage const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ErrorMessage) == 416, "Invalid UI::ErrorMessage size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ERRORMESSAGE_H__
#endif
