#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <Mathlib\matvec.h>
#include <memory\memorylib.h>
#include <UserInterface\NewTextLabel.h>
#include <algorithm>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <UserInterface\uiprimitives.h>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <new>
#include <Render\gl\r_types.h>
#include <xstddef>
#include <type_traits>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <UserInterface\NewFrame.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\NewScrollBar.h>
#include <math.h>
#include <UserInterface\NewButton.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\Table.h>
#include <UserInterface\TableCell.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <map>
#include <platform\keydefines.h>
#include <xtree>
#include <Render\objects\cliprect.h>
#include <localizer\localizer.h>
#include <UserInterface\ScrollView.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <cassert>
#include <assert.h>
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Render\objects\compiledtext.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\NewText.h>
#include <string>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <platform\osdef.h>
#include <UserInterface\SharedGraphicFactory.h>

/* ---------- constants */

/* ---------- definitions */

class UI::`anonymous-namespace'::AlphabeticalSort :
    public UI::Table::SortPred
{
public:
    virtual __int32 operator()(UI::TableCell const *, UI::TableCell const *) const override;
    AlphabeticalSort(UI::`anonymous-namespace'::AlphabeticalSort const &); /* compiler_generated() */
    AlphabeticalSort(); /* compiler_generated() */
    UI::`anonymous-namespace'::AlphabeticalSort &operator=(UI::`anonymous-namespace'::AlphabeticalSort const &); /* compiler_generated() */
};
static_assert(sizeof(UI::`anonymous-namespace'::AlphabeticalSort) == 4, "Invalid UI::`anonymous-namespace'::AlphabeticalSort size");

class UI::`anonymous-namespace'::RowSort
{
public:
    RowSort(unsigned __int32, UI::Table::TableSortOrder, UI::Table::SortPred const &);
    bool operator()(UI::TableRow const *, UI::TableRow const *);
private:
    unsigned __int32 m_column; // 0x0
    UI::Table::TableSortOrder m_sortOrder; // 0x4
    UI::Table::SortPred const &m_pred; // 0x8
};
static_assert(sizeof(UI::`anonymous-namespace'::RowSort) == 12, "Invalid UI::`anonymous-namespace'::RowSort size");

typedef UI::`anonymous-namespace'::AlphabeticalSort UI::?A0xc748b43f::AlphabeticalSort;
typedef UI::`anonymous-namespace'::RowSort UI::?A0xc748b43f::RowSort;

/* ---------- prototypes */

extern void UI::DeleteCellVector(std::vector<UI::TableCell *,std::allocator<UI::TableCell *> > &cellVector);

_static UI::Table::TableSortOrder UI::CalcNewSortOrder(UI::Table::TableSortOrder oldSortOrder);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline UI::Table::Sorting::Sorting() // 0x684633
{
    mangled_assert("??0Sorting@Table@UI@@QAE@XZ");
    todo("implement");
}

_inline UI::Table::Sorting::Sorting(UI::Table::SortPred const *) // 0x684624
{
    mangled_assert("??0Sorting@Table@UI@@QAE@PBVSortPred@12@@Z");
    todo("implement");
}

_inline UI::Table::Sorting::~Sorting() // 0x684C47
{
    mangled_assert("??1Sorting@Table@UI@@QAE@XZ");
    todo("implement");
}

UI::Table::Table(UI::InterfaceElement *, char const *, UI::Table *) // 0x6848FC
{
    mangled_assert("??0Table@UI@@QAE@PAVInterfaceElement@1@PBDPAV01@@Z");
    todo("implement");
}

UI::Table::Table(LuaConfig &) // 0x68463D
{
    mangled_assert("??0Table@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::Table::Table(UI::Table const &) // 0x6847AD
{
    mangled_assert("??0Table@UI@@QAE@ABV01@@Z");
    todo("implement");
}

void UI::Table::Init() // 0x68589A
{
    mangled_assert("?Init@Table@UI@@AAEXXZ");
    todo("implement");
}

void UI::DeleteCellVector(std::vector<UI::TableCell *,std::allocator<UI::TableCell *> > &cellVector) // 0x68558F
{
    mangled_assert("?DeleteCellVector@UI@@YGXAAV?$vector@PAVTableCell@UI@@V?$allocator@PAVTableCell@UI@@@std@@@std@@@Z");
    todo("implement");
}

UI::Table::~Table() // 0x684C59
{
    mangled_assert("??1Table@UI@@UAE@XZ");
    todo("implement");
}

void UI::Table::CopyCellVector(std::vector<UI::TableCell *,std::allocator<UI::TableCell *> > &, std::vector<UI::TableCell *,std::allocator<UI::TableCell *> > const &) // 0x685516
{
    mangled_assert("?CopyCellVector@Table@UI@@AAEXAAV?$vector@PAVTableCell@UI@@V?$allocator@PAVTableCell@UI@@@std@@@std@@ABV34@@Z");
    todo("implement");
}

UI::Table const &UI::Table::operator=(UI::Table const &) // 0x684D75
{
    mangled_assert("??4Table@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

void UI::Table::Load(LuaConfig &) // 0x685BB2
{
    mangled_assert("?Load@Table@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::Table::ClearTable() // 0x6854CA
{
    mangled_assert("?ClearTable@Table@UI@@QAEXXZ");
    todo("implement");
}

void UI::Table::SetDefaultCells(UI::TableCell *, UI::TableCell *, UI::TableCell *) // 0x686889
{
    mangled_assert("?SetDefaultCells@Table@UI@@QAEXPAVTableCell@2@00@Z");
    todo("implement");
}

bool UI::Table::IsEmpty() const // 0x685BA6
{
    mangled_assert("?IsEmpty@Table@UI@@QBE_NXZ");
    todo("implement");
}

unsigned __int32 UI::Table::GetRowCount() const // 0x6857B2
{
    mangled_assert("?GetRowCount@Table@UI@@QBEIXZ");
    todo("implement");
}

unsigned __int32 UI::Table::GetColCount() const // 0x685714
{
    mangled_assert("?GetColCount@Table@UI@@QBEIXZ");
    todo("implement");
}

UI::TableRow *UI::Table::GetRow(unsigned __int32) // 0x68578D
{
    mangled_assert("?GetRow@Table@UI@@QAEPAVTableRow@2@I@Z");
    todo("implement");
}

UI::TableRow *UI::Table::GetSelectedRow() // 0x685807
{
    mangled_assert("?GetSelectedRow@Table@UI@@QAEPAVTableRow@2@XZ");
    todo("implement");
}

std::list<UI::TableCell *,std::allocator<UI::TableCell *> > UI::Table::GetCol(unsigned __int32) const // 0x6856A0
{
    mangled_assert("?GetCol@Table@UI@@QBE?AV?$list@PAVTableCell@UI@@V?$allocator@PAVTableCell@UI@@@std@@@std@@I@Z");
    todo("implement");
}

unsigned __int32 UI::Table::GetColWidth(unsigned __int32) const // 0x685776
{
    mangled_assert("?GetColWidth@Table@UI@@QBEII@Z");
    todo("implement");
}

unsigned __int32 UI::Table::GetRowHeight(unsigned __int32) const // 0x6857B9
{
    mangled_assert("?GetRowHeight@Table@UI@@QBEII@Z");
    todo("implement");
}

unsigned __int32 UI::Table::GetColPosition(unsigned __int32) const // 0x685724
{
    mangled_assert("?GetColPosition@Table@UI@@QBEII@Z");
    todo("implement");
}

unsigned __int32 UI::Table::GetRowPosition(unsigned __int32) const // 0x6857C9
{
    mangled_assert("?GetRowPosition@Table@UI@@QBEII@Z");
    todo("implement");
}

void UI::Table::SetRowHeight(unsigned __int32, unsigned __int32) // 0x686981
{
    mangled_assert("?SetRowHeight@Table@UI@@QAEXII@Z");
    todo("implement");
}

void UI::Table::SetColWidth(unsigned __int32, unsigned __int32) // 0x686859
{
    mangled_assert("?SetColWidth@Table@UI@@QAEXII@Z");
    todo("implement");
}

UI::TableRow *UI::Table::InsertRow(UI::TableRow *, unsigned __int32, bool) // 0x685AD2
{
    mangled_assert("?InsertRow@Table@UI@@QAEPAVTableRow@2@PAV32@I_N@Z");
    todo("implement");
}

void UI::Table::InsertCol(unsigned __int32, UI::TableCell *) // 0x6859F6
{
    mangled_assert("?InsertCol@Table@UI@@QAEXIPAVTableCell@2@@Z");
    todo("implement");
}

void UI::Table::AddColTitleCell(UI::TableCell *, unsigned __int32) // 0x685346
{
    mangled_assert("?AddColTitleCell@Table@UI@@AAEXPAVTableCell@2@I@Z");
    todo("implement");
}

void UI::Table::MergeTable(UI::Table const &) // 0x6862E7
{
    mangled_assert("?MergeTable@Table@UI@@QAEXABV12@@Z");
    todo("implement");
}

void UI::Table::ResizeTable(unsigned __int32, unsigned __int32) // 0x686719
{
    mangled_assert("?ResizeTable@Table@UI@@QAEXII@Z");
    todo("implement");
}

UI::TableCell *UI::Table::GetTitleCell(unsigned __int32) // 0x685877
{
    mangled_assert("?GetTitleCell@Table@UI@@QAEPAVTableCell@2@I@Z");
    todo("implement");
}

void UI::Table::SetSortOrder(unsigned __int32, UI::Table::TableSortOrder) // 0x6869D0
{
    mangled_assert("?SetSortOrder@Table@UI@@AAEXIW4TableSortOrder@12@@Z");
    todo("implement");
}

UI::Table::TableSortOrder UI::Table::GetSortOrder(unsigned __int32) const // 0x685824
{
    mangled_assert("?GetSortOrder@Table@UI@@QBE?AW4TableSortOrder@12@I@Z");
    todo("implement");
}

UI::Table::SortPred const *UI::Table::GetSortPred(unsigned __int32) const // 0x68584D
{
    mangled_assert("?GetSortPred@Table@UI@@QBEPBVSortPred@12@I@Z");
    todo("implement");
}

UI::TableCell const &UI::Table::GetCell(unsigned __int32, unsigned __int32) const // 0x685676
{
    mangled_assert("?GetCell@Table@UI@@QBEABVTableCell@2@II@Z");
    todo("implement");
}

UI::TableCell &UI::Table::GetCell(unsigned __int32, unsigned __int32) // 0x68564A
{
    mangled_assert("?GetCell@Table@UI@@AAEAAVTableCell@2@II@Z");
    todo("implement");
}

void UI::Table::SetCell(unsigned __int32, unsigned __int32, UI::TableCell const &) // 0x6867DB
{
    mangled_assert("?SetCell@Table@UI@@QAEXIIABVTableCell@2@@Z");
    todo("implement");
}

void UI::Table::AllocateTable(unsigned __int32, unsigned __int32) // 0x68539B
{
    mangled_assert("?AllocateTable@Table@UI@@AAEXII@Z");
    todo("implement");
}

void UI::Table::DestroyTable() // 0x6855B6
{
    mangled_assert("?DestroyTable@Table@UI@@AAEXXZ");
    todo("implement");
}

bool UI::Table::RemoveRow(unsigned __int32) // 0x686637
{
    mangled_assert("?RemoveRow@Table@UI@@QAE_NI@Z");
    todo("implement");
}

void UI::Table::SetColSortPred(unsigned __int32, UI::Table::SortPred const *) // 0x6867F6
{
    mangled_assert("?SetColSortPred@Table@UI@@QAEXIPBVSortPred@12@@Z");
    todo("implement");
}

_inline UI::Table::SortPred::SortPred() // 0x68461B
{
    mangled_assert("??0SortPred@Table@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::Table::SortByColAlphabetically(unsigned __int32, UI::Table::TableSortOrder) // 0x686ACA
{
    mangled_assert("?SortByColAlphabetically@Table@UI@@QAEXIW4TableSortOrder@12@@Z");
    todo("implement");
}

void UI::Table::SortByCol(unsigned __int32) // 0x686A77
{
    mangled_assert("?SortByCol@Table@UI@@QAEXI@Z");
    todo("implement");
}

void UI::Table::SortByColPred(unsigned __int32, UI::Table::TableSortOrder, UI::Table::SortPred const &) // 0x686B1A
{
    mangled_assert("?SortByColPred@Table@UI@@QAEXIW4TableSortOrder@12@ABVSortPred@12@@Z");
    todo("implement");
}

void UI::Table::DrawCells(Vector_2i const &, Rect_i const &) // 0x685647
{
    mangled_assert("?DrawCells@Table@UI@@AAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::Table::OnResize(__int32, __int32) // 0x68636C
{
    mangled_assert("?OnResize@Table@UI@@MAEXHH@Z");
    todo("implement");
}

void UI::Table::Refresh() // 0x686436
{
    mangled_assert("?Refresh@Table@UI@@QAEXXZ");
    todo("implement");
}

bool UI::Table::SelectRow(unsigned __int32) // 0x686785
{
    mangled_assert("?SelectRow@Table@UI@@QAE_NI@Z");
    todo("implement");
}

void UI::Table::Draw2(Vector_2i const &, Rect_i const &) // 0x685642
{
    mangled_assert("?Draw2@Table@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::Table::OnUpdate(unsigned __int32) // 0x686433
{
    mangled_assert("?OnUpdate@Table@UI@@UAEXI@Z");
    todo("implement");
}

void UI::Table::OnRowClicked(UI::InterfaceElement *rowFrame, __int32 x, __int32 y, unsigned __int32 b) // 0x68639C
{
    mangled_assert("?OnRowClicked@Table@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

UI::TableRow::TableRow(UI::Table *, UI::TableCell *) // 0x684B1A
{
    mangled_assert("??0TableRow@UI@@QAE@PAVTable@1@PAVTableCell@1@@Z");
    todo("implement");
}

_inline std::_List_buy<UI::TableCell *,std::allocator<UI::TableCell *> >::~_List_buy<UI::TableCell *,std::allocator<UI::TableCell *> >() // 0x684C07
{
    mangled_assert("??1?$_List_buy@PAVTableCell@UI@@V?$allocator@PAVTableCell@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::TableRow *,std::allocator<UI::TableRow *> >::~_List_buy<UI::TableRow *,std::allocator<UI::TableRow *> >() // 0x684C10
{
    mangled_assert("??1?$_List_buy@PAVTableRow@UI@@V?$allocator@PAVTableRow@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::TableRow::TableRow(UI::TableRow const &) // 0x684A73
{
    mangled_assert("??0TableRow@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::TableRow::~TableRow() // 0x684D17
{
    mangled_assert("??1TableRow@UI@@UAE@XZ");
    todo("implement");
}

UI::TableRow const &UI::TableRow::operator=(UI::TableRow const &) // 0x684FBF
{
    mangled_assert("??4TableRow@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

void UI::TableRow::SetParentTable(UI::Table *) // 0x6868EB
{
    mangled_assert("?SetParentTable@TableRow@UI@@QAEXPAVTable@2@@Z");
    todo("implement");
}

void UI::TableRow::ClearRow() // 0x685491
{
    mangled_assert("?ClearRow@TableRow@UI@@QAEXXZ");
    todo("implement");
}

UI::TableCell *UI::TableRow::GetCellAt(unsigned __int32) // 0x68567B
{
    mangled_assert("?GetCellAt@TableRow@UI@@QAEPAVTableCell@2@I@Z");
    todo("implement");
}

UI::TableCell const *UI::TableRow::GetCellAt(unsigned __int32) const // 0x685680
{
    mangled_assert("?GetCellAt@TableRow@UI@@QBEPBVTableCell@2@I@Z");
    todo("implement");
}

void UI::TableRow::ResetCell(UI::TableCell *, unsigned __int32) // 0x6866B6
{
    mangled_assert("?ResetCell@TableRow@UI@@QAEXPAVTableCell@2@I@Z");
    todo("implement");
}

void UI::TableRow::InsertCell(UI::TableCell *, unsigned __int32) // 0x685970
{
    mangled_assert("?InsertCell@TableRow@UI@@QAEXPAVTableCell@2@I@Z");
    todo("implement");
}

void UI::TableRow::SetTitle(UI::TableCell const &) // 0x686A2A
{
    mangled_assert("?SetTitle@TableRow@UI@@QAEXABVTableCell@2@@Z");
    todo("implement");
}

void UI::TableRow::SetRowHeight(unsigned __int32) // 0x68699C
{
    mangled_assert("?SetRowHeight@TableRow@UI@@QAEXI@Z");
    todo("implement");
}

void UI::TableRow::Refresh() // 0x68659C
{
    mangled_assert("?Refresh@TableRow@UI@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static UI::Table::TableSortOrder UI::CalcNewSortOrder(UI::Table::TableSortOrder oldSortOrder) // 0x68547E
{
    mangled_assert("UI::CalcNewSortOrder");
    todo("implement");
}
#endif
