#if 0
#ifndef __TABLE_H__
#define __TABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::TableRow
{
public:
    TableRow(UI::TableRow const &);
    TableRow(UI::Table *, UI::TableCell *);
    virtual ~TableRow();
    UI::TableRow const &operator=(UI::TableRow const &);
    UI::Table *m_parentTable; // 0x4
    UI::TableCell *m_rowTitle; // 0x8
    UI::NewFrame *m_rowFrame; // 0xC
    std::list<UI::TableCell *,std::allocator<UI::TableCell *> > m_cellList; // 0x10
    void InsertCell(UI::TableCell *, unsigned __int32);
    void ResetCell(UI::TableCell *, unsigned __int32);
    UI::TableCell const *GetCellAt(unsigned __int32) const;
    UI::TableCell *GetCellAt(unsigned __int32);
    void SetTitle(UI::TableCell const &);
    void SetParentTable(UI::Table *);
    void SetRowHeight(unsigned __int32);
    void ClearRow();
    void Refresh();
};
static_assert(sizeof(UI::TableRow) == 24, "Invalid UI::TableRow size");

class UI::Table :
    public UI::InterfaceElement
{
public:
    enum TableSortOrder
    {
        SO_Unsorted = 0,
        SO_Ascending,
        SO_Descending,
    };
    class SortPred
    {
    public:
        virtual __int32 operator()(UI::TableCell const *, UI::TableCell const *) const = 0;
        SortPred(UI::Table::SortPred const &); /* compiler_generated() */
        _inline SortPred(); /* compiler_generated() */
        UI::Table::SortPred &operator=(UI::Table::SortPred const &); /* compiler_generated() */
    };
    static_assert(sizeof(SortPred) == 4, "Invalid SortPred size");
    Table(UI::Table const &);
    Table(LuaConfig &);
    Table(UI::InterfaceElement *, char const *, UI::Table *);
    virtual ~Table() override;
    UI::Table const &operator=(UI::Table const &);
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    virtual void OnUpdate(unsigned __int32) override;
    bool IsEmpty() const;
    unsigned __int32 GetRowCount() const;
    unsigned __int32 GetColCount() const;
    UI::TableRow *GetRow(unsigned __int32);
    UI::TableRow *GetSelectedRow();
    std::list<UI::TableCell *,std::allocator<UI::TableCell *> > GetCol(unsigned __int32) const;
    unsigned __int32 GetRowHeight(unsigned __int32) const;
    unsigned __int32 GetColWidth(unsigned __int32) const;
    unsigned __int32 GetColPosition(unsigned __int32) const;
    unsigned __int32 GetRowPosition(unsigned __int32) const;
    void SetRowHeight(unsigned __int32, unsigned __int32);
    void SetColWidth(unsigned __int32, unsigned __int32);
    bool RemoveRow(unsigned __int32);
    UI::TableRow *InsertRow(UI::TableRow *, unsigned __int32, bool);
    void InsertCol(unsigned __int32, UI::TableCell *);
    void MergeTable(UI::Table const &);
    void ResizeTable(unsigned __int32, unsigned __int32);
private:
    UI::TableCell &GetCell(unsigned __int32, unsigned __int32);
public:
    UI::TableCell const &GetCell(unsigned __int32, unsigned __int32) const;
    void SetCell(unsigned __int32, unsigned __int32, UI::TableCell const &);
    void ClearTable();
    void Refresh();
    void SetDefaultCells(UI::TableCell *, UI::TableCell *, UI::TableCell *);
    bool SelectRow(unsigned __int32);
    UI::TableCell *GetTitleCell(unsigned __int32);
    void SetColSortPred(unsigned __int32, UI::Table::SortPred const *);
    UI::Table::TableSortOrder GetSortOrder(unsigned __int32) const;
    UI::Table::SortPred const *GetSortPred(unsigned __int32) const;
    void SortByColAlphabetically(unsigned __int32, UI::Table::TableSortOrder);
    void SortByCol(unsigned __int32);
    void SortByColPred(unsigned __int32, UI::Table::TableSortOrder, UI::Table::SortPred const &);
protected:
    void Load(LuaConfig &);
    virtual void OnResize(__int32, __int32) override;
    typedef UI::InterfaceElement SuperClass;
    class Sorting;
private:
    std::list<UI::TableRow *,std::allocator<UI::TableRow *> > m_rows; // 0x400
    std::vector<UI::TableCell *,std::allocator<UI::TableCell *> > m_colTitles; // 0x408
    std::vector<unsigned int,std::allocator<unsigned int> > m_rowHeights; // 0x414
    std::vector<unsigned int,std::allocator<unsigned int> > m_colWidths; // 0x420
    std::vector<UI::Table::Sorting *,std::allocator<UI::Table::Sorting *> > m_colSorting; // 0x42C
    unsigned __int32 m_defaultRowHeight; // 0x438
    unsigned __int32 m_defaultColWidth; // 0x43C
    unsigned __int32 m_titleHeight; // 0x440
    unsigned __int32 m_titleWidth; // 0x444
    bool m_showRowTitles; // 0x448
    bool m_showColTitles; // 0x449
    Vector_2i m_cellPadding; // 0x44C
    Vector_2i m_cellSpacing; // 0x454
    UI::TableCell *m_defaultCell; // 0x45C
    UI::TableCell *m_defaultRowTitle; // 0x460
    UI::TableCell *m_defaultColTitle; // 0x464
    unsigned __int32 m_headerSpace; // 0x468
    UI::ScrollView *m_contents; // 0x46C
    unsigned __int32 m_selectedRow; // 0x470
    Color_4b m_selectedRowColor; // 0x474
    Color_4b m_defaultRowColor; // 0x478
    static UI::Table::TableSortOrder ms_sortOrder;
    void Init();
    void AllocateTable(unsigned __int32, unsigned __int32);
    void CopyCellVector(std::vector<UI::TableCell *,std::allocator<UI::TableCell *> > &, std::vector<UI::TableCell *,std::allocator<UI::TableCell *> > const &);
    void DrawCells(Vector_2i const &, Rect_i const &);
    void AddColTitleCell(UI::TableCell *, unsigned __int32);
    void SetSortOrder(unsigned __int32, UI::Table::TableSortOrder);
    void DestroyTable();
    static void OnRowClicked(UI::InterfaceElement *rowFrame, __int32 x, __int32 y, unsigned __int32 b);
};
static_assert(sizeof(UI::Table) == 1152, "Invalid UI::Table size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_6874E6(UI::Table *const);
_inline UI::InterfaceElement *UI::Table::clone() // 0x6874E6
{
    mangled_assert("?clone@Table@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_6874E6(this);
    return __result;
}

/* ---------- private code */

#endif // __TABLE_H__
#endif
