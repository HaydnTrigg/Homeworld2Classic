#if 0
#ifndef __BADGEBUILTIN_H__
#define __BADGEBUILTIN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BuiltinSource :
    public FilePath::Source
{
public:
    virtual bool ConvertFromAlias(char *, char const *, StreamMode const) override;
    virtual bool ConvertToAlias(char *, char const *) override;
    virtual ByteStream *FileOpen(char const *, StreamMode) override;
    virtual bool FileDel(char const *) override;
    virtual FilePath::FILE_Type FileType(char const *, StreamMode) override;
    virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) override;
    BuiltinSource(BuiltinSource const &); /* compiler_generated() */
    _inline BuiltinSource(); /* compiler_generated() */
    virtual _inline ~BuiltinSource() override; /* compiler_generated() */
    BuiltinSource &operator=(BuiltinSource const &); /* compiler_generated() */
};
static_assert(sizeof(BuiltinSource) == 4, "Invalid BuiltinSource size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BADGEBUILTIN_H__
#endif
