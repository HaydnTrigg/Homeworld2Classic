#if 0
#ifndef __STATMONITOR_H__
#define __STATMONITOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StatMonitorChannel
{
public:
    StatMonitorChannel(StatMonitorChannel const &); /* compiler_generated() */
    StatMonitorChannel(char const *);
    ~StatMonitorChannel();
    std::vector<float,std::allocator<float> > m_buffer; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0xC
    vector4 m_colour; // 0x24
    bool m_bActive; // 0x34
    float m_min; // 0x38
    float m_max; // 0x3C
    Timer *m_pTimer; // 0x40
    bool m_bChild; // 0x44
    StatMonitorChannel *m_pParent; // 0x48
    StatMonitorChannel &operator=(StatMonitorChannel const &); /* compiler_generated() */
};
static_assert(sizeof(StatMonitorChannel) == 76, "Invalid StatMonitorChannel size");

class StatMonitor
{
public:
    typedef std::vector<StatMonitorChannel *,std::allocator<StatMonitorChannel *> > ChannelCont;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContI;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContCI;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > iterator;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > const_iterator;
    StatMonitor(StatMonitor const &); /* compiler_generated() */
    StatMonitor(char *, float, float, float, float);
    ~StatMonitor();
    void setChannelName(unsigned __int32, char const *);
    void setChannelColor(unsigned __int32, vector4 const &);
    void setChannelActive(unsigned __int32, bool);
    void setChannelMin(unsigned __int32, float);
    void setChannelMax(unsigned __int32, float);
    void startFileLog(char const *);
    void stopFileLog();
    void logValue(StatMonitorChannel *, float);
    void logValue(unsigned __int32, float);
    void display();
    void nextFrame();
    void disableAllChannels();
    void startChannelTimer(char const *, float, float, bool, char const *);
    void stopChannelTimer(char const *);
    void reportChannelTimer(char const *);
    void clearThisFrameTimes();
    void setAutoRanging(bool);
    float getChannelTime(char const *);
    unsigned __int32 getCurrentFrame() const;
    float getXOffset() const;
    float getYOffset() const;
    float getWidth() const;
    float getHeight() const;
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > begin() const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > begin();
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > end() const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > end();
    unsigned __int32 size() const;
private:
    StatMonitorChannel *getChannelFromName(char const *) const;
    void renderChildrenChannels(unsigned __int32, float, float, unsigned __int32 *, unsigned __int32, FontSystem *);
    std::vector<StatMonitorChannel *,std::allocator<StatMonitorChannel *> > m_channels; // 0x0
    unsigned __int32 m_numChannels; // 0xC
    unsigned __int32 m_curFrame; // 0x10
    bool m_bAutoRanging; // 0x14
    FileStream *m_fstream; // 0x18
    unsigned __int32 m_channelsUsed; // 0x1C
    float m_xOffset; // 0x20
    float m_yOffset; // 0x24
    float m_width; // 0x28
    float m_height; // 0x2C
public:
    StatMonitor &operator=(StatMonitor const &); /* compiler_generated() */
};
static_assert(sizeof(StatMonitor) == 48, "Invalid StatMonitor size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATMONITOR_H__
/* combined */
#ifndef __STATMONITOR_H__
#define __STATMONITOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StatMonitorChannel
{
public:
    _inline StatMonitorChannel(StatMonitorChannel const &); /* compiler_generated() */
    StatMonitorChannel(char const *);
    ~StatMonitorChannel();
    std::vector<float,std::allocator<float> > m_buffer; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0xC
    vector4 m_colour; // 0x24
    bool m_bActive; // 0x34
    float m_min; // 0x38
    float m_max; // 0x3C
    Timer *m_pTimer; // 0x40
    bool m_bChild; // 0x44
    StatMonitorChannel *m_pParent; // 0x48
    _inline StatMonitorChannel &operator=(StatMonitorChannel const &); /* compiler_generated() */
};
static_assert(sizeof(StatMonitorChannel) == 76, "Invalid StatMonitorChannel size");

class StatMonitor
{
public:
    typedef std::vector<StatMonitorChannel *,std::allocator<StatMonitorChannel *> > ChannelCont;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContI;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContCI;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > iterator;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > const_iterator;
    _inline StatMonitor(StatMonitor const &); /* compiler_generated() */
    StatMonitor(char *, float, float, float, float);
    ~StatMonitor();
    void setChannelName(unsigned __int32, char const *);
    void setChannelColor(unsigned __int32, vector4 const &);
    void setChannelActive(unsigned __int32, bool);
    void setChannelMin(unsigned __int32, float);
    void setChannelMax(unsigned __int32, float);
    void startFileLog(char const *);
    void stopFileLog();
    void logValue(StatMonitorChannel *, float);
    void logValue(unsigned __int32, float);
    void display();
    void nextFrame();
    void disableAllChannels();
    void startChannelTimer(char const *, float, float, bool, char const *);
    void stopChannelTimer(char const *);
    void reportChannelTimer(char const *);
    void clearThisFrameTimes();
    void setAutoRanging(bool);
    float getChannelTime(char const *);
    _inline unsigned __int32 getCurrentFrame() const;
    _inline float getXOffset() const;
    _inline float getYOffset() const;
    _inline float getWidth() const;
    _inline float getHeight() const;
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > begin() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > begin();
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > end() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > end();
    _inline unsigned __int32 size() const;
private:
    StatMonitorChannel *getChannelFromName(char const *) const;
    void renderChildrenChannels(unsigned __int32, float, float, unsigned __int32 *, unsigned __int32, FontSystem *);
    std::vector<StatMonitorChannel *,std::allocator<StatMonitorChannel *> > m_channels; // 0x0
    unsigned __int32 m_numChannels; // 0xC
    unsigned __int32 m_curFrame; // 0x10
    bool m_bAutoRanging; // 0x14
    FileStream *m_fstream; // 0x18
    unsigned __int32 m_channelsUsed; // 0x1C
    float m_xOffset; // 0x20
    float m_yOffset; // 0x24
    float m_width; // 0x28
    float m_height; // 0x2C
public:
    _inline StatMonitor &operator=(StatMonitor const &); /* compiler_generated() */
};
static_assert(sizeof(StatMonitor) == 48, "Invalid StatMonitor size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > StatMonitor::begin() // 0x10003129
{
    mangled_assert("?begin@StatMonitor@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVStatMonitorChannel@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > StatMonitor::end() // 0x10003176
{
    mangled_assert("?end@StatMonitor@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVStatMonitorChannel@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 StatMonitor::size() const // 0x1000350D
{
    mangled_assert("?size@StatMonitor@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 StatMonitor::getCurrentFrame() const // 0x10003228
{
    mangled_assert("?getCurrentFrame@StatMonitor@@QBEIXZ");
    todo("implement");
}

_inline float StatMonitor::getXOffset() const // 0x10003234
{
    mangled_assert("?getXOffset@StatMonitor@@QBEMXZ");
    todo("implement");
}

_inline float StatMonitor::getYOffset() const // 0x10003238
{
    mangled_assert("?getYOffset@StatMonitor@@QBEMXZ");
    todo("implement");
}

_inline float StatMonitor::getWidth() const // 0x10003230
{
    mangled_assert("?getWidth@StatMonitor@@QBEMXZ");
    todo("implement");
}

_inline float StatMonitor::getHeight() const // 0x1000322C
{
    mangled_assert("?getHeight@StatMonitor@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STATMONITOR_H__
#endif
