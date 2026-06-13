#if 0
#ifndef __CALLGRAPH_H__
#define __CALLGRAPH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CallGraph
{
public:
    CallGraph(char const *);
    ~CallGraph();
    void Visit();
    void DumpLog();
    class Data;
private:
    CallGraph::Data *m_pimpl; // 0x0
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(CallGraph) == 4, "Invalid CallGraph size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CALLGRAPH_H__
#endif
