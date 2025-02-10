#pragma once
// IWYU pragma private; include "VROSC/ScalePreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScalePreset)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScalePreset_NotePriority;
}
namespace VROSC {
class ScalePreset___c__DisplayClass4_0;
}
// Forward declare root types
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
class ScalePreset_NotePriority;
}
namespace VROSC {
class ScalePreset___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScalePreset);
MARK_REF_PTR_T(::VROSC::ScalePreset_NotePriority);
MARK_REF_PTR_T(::VROSC::ScalePreset___c__DisplayClass4_0);
// Dependencies System.Object, VROSC.Note
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScalePreset/NotePriority
class CORDL_TYPE ScalePreset_NotePriority : public ::System::Object {
public:
// Declarations
/// @brief Field Note, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Note, put=__cordl_internal_set_Note)) ::VROSC::Note  Note;

/// @brief Field Priority, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Priority, put=__cordl_internal_set_Priority)) int32_t  Priority;

static inline ::VROSC::ScalePreset_NotePriority* New_ctor(::VROSC::Note  note, int32_t  priority) ;

constexpr ::VROSC::Note const& __cordl_internal_get_Note() const;

constexpr ::VROSC::Note& __cordl_internal_get_Note() ;

constexpr int32_t const& __cordl_internal_get_Priority() const;

constexpr int32_t& __cordl_internal_get_Priority() ;

constexpr void __cordl_internal_set_Note(::VROSC::Note  value) ;

constexpr void __cordl_internal_set_Priority(int32_t  value) ;

/// @brief Method .ctor, addr 0x16f7690, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::Note  note, int32_t  priority) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalePreset_NotePriority() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalePreset_NotePriority", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalePreset_NotePriority(ScalePreset_NotePriority && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalePreset_NotePriority", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalePreset_NotePriority(ScalePreset_NotePriority const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{791};

/// @brief Field Note, offset: 0x10, size: 0x4, def value: None
 ::VROSC::Note  ___Note;

/// @brief Field Priority, offset: 0x14, size: 0x4, def value: None
 int32_t  ___Priority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScalePreset_NotePriority, ___Note) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScalePreset_NotePriority, ___Priority) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScalePreset_NotePriority, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.Note
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScalePreset/<>c__DisplayClass4_0
class CORDL_TYPE ScalePreset___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field note, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_note, put=__cordl_internal_set_note)) ::VROSC::Note  note;

static inline ::VROSC::ScalePreset___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <UpdateNotePriorityList>b__0, addr 0x16f7780, size 0x24, virtual false, abstract: false, final false
inline bool _UpdateNotePriorityList_b__0(::VROSC::ScalePreset_NotePriority*  n) ;

/// @brief Method <UpdateNotePriorityList>b__1, addr 0x16f7738, size 0x24, virtual false, abstract: false, final false
inline bool _UpdateNotePriorityList_b__1(::VROSC::ScalePreset_NotePriority*  n) ;

/// @brief Method <UpdateNotePriorityList>b__2, addr 0x16f775c, size 0x24, virtual false, abstract: false, final false
inline bool _UpdateNotePriorityList_b__2(::VROSC::ScalePreset_NotePriority*  n) ;

constexpr ::VROSC::Note const& __cordl_internal_get_note() const;

constexpr ::VROSC::Note& __cordl_internal_get_note() ;

constexpr void __cordl_internal_set_note(::VROSC::Note  value) ;

/// @brief Method .ctor, addr 0x16f7688, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalePreset___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalePreset___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalePreset___c__DisplayClass4_0(ScalePreset___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalePreset___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalePreset___c__DisplayClass4_0(ScalePreset___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{792};

/// @brief Field note, offset: 0x10, size: 0x4, def value: None
 ::VROSC::Note  ___note;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScalePreset___c__DisplayClass4_0, ___note) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScalePreset___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScalePreset
class CORDL_TYPE ScalePreset : public ::System::Object {
public:
// Declarations
using NotePriority = ::VROSC::ScalePreset_NotePriority;

using __c__DisplayClass4_0 = ::VROSC::ScalePreset___c__DisplayClass4_0;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field NotePriorities, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NotePriorities, put=__cordl_internal_set_NotePriorities)) ::System::Collections::Generic::List_1<::VROSC::ScalePreset_NotePriority*>*  NotePriorities;

/// @brief Field Scale, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::VROSC::Scale  Scale;

static inline ::VROSC::ScalePreset* New_ctor() ;

/// @brief Method UpdateNotePriorityList, addr 0x16f73b8, size 0x2d0, virtual false, abstract: false, final false
inline void UpdateNotePriorityList() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScalePreset_NotePriority*>* const& __cordl_internal_get_NotePriorities() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScalePreset_NotePriority*>*& __cordl_internal_get_NotePriorities() ;

constexpr ::VROSC::Scale const& __cordl_internal_get_Scale() const;

constexpr ::VROSC::Scale& __cordl_internal_get_Scale() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_NotePriorities(::System::Collections::Generic::List_1<::VROSC::ScalePreset_NotePriority*>*  value) ;

constexpr void __cordl_internal_set_Scale(::VROSC::Scale  value) ;

/// @brief Method .ctor, addr 0x16f76bc, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalePreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalePreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalePreset(ScalePreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalePreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalePreset(ScalePreset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{793};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Scale, offset: 0x18, size: 0x4, def value: None
 ::VROSC::Scale  ___Scale;

/// @brief Field NotePriorities, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::ScalePreset_NotePriority*>*  ___NotePriorities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScalePreset, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScalePreset, ___Scale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScalePreset, ___NotePriorities) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScalePreset, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScalePreset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScalePreset*, "VROSC", "ScalePreset");
NEED_NO_BOX(::VROSC::ScalePreset_NotePriority);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScalePreset_NotePriority*, "VROSC", "ScalePreset/NotePriority");
NEED_NO_BOX(::VROSC::ScalePreset___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScalePreset___c__DisplayClass4_0*, "VROSC", "ScalePreset/<>c__DisplayClass4_0");
