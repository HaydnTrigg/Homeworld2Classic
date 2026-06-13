#if 0
#ifndef __STATISTICS_H__
#define __STATISTICS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::Statistics :
    public UI::NewUIScreen
{
public:
    enum LastGameRubric
    {
        LGR_SPSkirmish = 0,
        LGR_SPCampaign,
        LGR_MPLAN,
        LGR_MPSteam,
        LGR_MPDirectIP,
    };
    Statistics(UI::Statistics const &); /* compiler_generated() */
    Statistics(char const *);
    virtual ~Statistics() override;
    void SetLastGameRubric(UI::Statistics::LastGameRubric);
    virtual void Update(unsigned __int32) override;
    static UI::Statistics *GetScreen();
    wchar_t const *GetNoTimeKilledString();
protected:
    virtual void OnPreLoad(LuaConfig &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    struct StatEntry;
    struct StatsTab;
    class StatsImpl;
private:
    boost::scoped_ptr<UI::Statistics::StatsImpl> m_pimpl; // 0x19C
public:
    UI::Statistics &operator=(UI::Statistics const &); /* compiler_generated() */
};
static_assert(sizeof(UI::Statistics) == 416, "Invalid UI::Statistics size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATISTICS_H__
#endif
