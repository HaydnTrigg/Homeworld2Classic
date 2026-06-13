#if 0
#ifndef __UIPROXY_H__
#define __UIPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UIProxy
{
public:
    UIProxy();
    ~UIProxy();
    void OnOrderSend(Order const *);
    void OnOrderReceived(Order const *);
private:
    void OnSendMoveOrder(MoveOrder const *);
    void OnReceivedMoveOrder(MoveOrder const *);
    void OnSendSquadronList2SobOrder(SquadronList2SobBase const *);
    void OnReceivedSquadronList2SobOrder(SquadronList2SobBase const *);
    void OnSendSquadronList2SelectionOrder(SquadronList2SelectionBase const *);
    void OnReceivedSquadronList2SelectionOrder(SquadronList2SelectionBase const *);
};
static_assert(sizeof(UIProxy) == 1, "Invalid UIProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __UIPROXY_H__
#endif
