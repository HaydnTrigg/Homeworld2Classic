#if 0
#ifndef __CAMPAIGNMAN_H__
#define __CAMPAIGNMAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CampaignMan :
    private boost::noncopyable
{
public:
    CampaignMan(CampaignMan const &); /* compiler_generated() */
private:
    CampaignMan();
    ~CampaignMan();
public:
    static CampaignMan *Instance();
    static bool Initialize();
    static bool Shutdown();
    unsigned __int32 GetNumCampaigns();
    char const *GetCampaignAt(unsigned __int32);
    bool SetCampaign(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    struct CampaignEntry
    {
        fwstring<64> name; // 0x0
        fstring<260> folder; // 0x82
        _inline CampaignEntry(); /* compiler_generated() */
        _inline ~CampaignEntry(); /* compiler_generated() */
    };
    static_assert(sizeof(CampaignEntry) == 392, "Invalid CampaignEntry size");
    typedef std::vector<CampaignMan::CampaignEntry,std::allocator<CampaignMan::CampaignEntry> > CampaignList;
private:
    bool m_bSearched; // 0x0
    std::vector<CampaignMan::CampaignEntry,std::allocator<CampaignMan::CampaignEntry> > m_Campaigns; // 0x4
    void FindCampaigns();
public:
    CampaignMan &operator=(CampaignMan const &); /* compiler_generated() */
};
static_assert(sizeof(CampaignMan) == 16, "Invalid CampaignMan size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CAMPAIGNMAN_H__
#endif
