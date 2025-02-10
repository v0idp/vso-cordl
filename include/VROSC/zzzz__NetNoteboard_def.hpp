#pragma once
// IWYU pragma private; include "VROSC/NetNoteboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetNoteboard)
namespace System {
class Object;
}
namespace VROSC {
class NoteFieldParameters;
}
// Forward declare root types
namespace VROSC {
class NetNoteboard;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NetNoteboard);
// Dependencies VROSC.NoteBoardNoteController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NetNoteboard
class CORDL_TYPE NetNoteboard : public ::VROSC::NoteBoardNoteController {
public:
// Declarations
 __declspec(property(get=get_XYNotes, put=set_XYNotes)) ::System::Object*  XYNotes;

 __declspec(property(get=get_XZNotes, put=set_XZNotes)) ::System::Object*  XZNotes;

 __declspec(property(get=get_YZNotes, put=set_YZNotes)) ::System::Object*  YZNotes;

/// @brief Field <XYNotes>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__XYNotes_k__BackingField, put=__cordl_internal_set__XYNotes_k__BackingField)) ::System::Object*  _XYNotes_k__BackingField;

/// @brief Field <XZNotes>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__XZNotes_k__BackingField, put=__cordl_internal_set__XZNotes_k__BackingField)) ::System::Object*  _XZNotes_k__BackingField;

/// @brief Field <YZNotes>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__YZNotes_k__BackingField, put=__cordl_internal_set__YZNotes_k__BackingField)) ::System::Object*  _YZNotes_k__BackingField;

/// @brief Field _stringsize, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__stringsize, put=__cordl_internal_set__stringsize)) float_t  _stringsize;

/// @brief Method ClearNotefield, addr 0x17b3884, size 0x8c, virtual true, abstract: false, final false
inline void ClearNotefield() ;

static inline ::VROSC::NetNoteboard* New_ctor() ;

/// @brief Method SetupNoteNeighbours, addr 0x17b420c, size 0x230, virtual false, abstract: false, final false
inline void SetupNoteNeighbours() ;

/// @brief Method UpdateNoteboard, addr 0x17b3a14, size 0x7f8, virtual true, abstract: false, final false
inline void UpdateNoteboard(::VROSC::NoteFieldParameters*  parameters) ;

/// @brief Method UpdateNumberOfFields, addr 0x17b3910, size 0x104, virtual false, abstract: false, final false
inline int32_t UpdateNumberOfFields(::VROSC::NoteFieldParameters*  parameters) ;

constexpr ::System::Object* const& __cordl_internal_get__XYNotes_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__XYNotes_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__XZNotes_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__XZNotes_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__YZNotes_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__YZNotes_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__stringsize() const;

constexpr float_t& __cordl_internal_get__stringsize() ;

constexpr void __cordl_internal_set__XYNotes_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__XZNotes_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__YZNotes_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__stringsize(float_t  value) ;

/// @brief Method .ctor, addr 0x17b4e08, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_XYNotes, addr 0x17b385c, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_XYNotes() ;

/// @brief Method get_XZNotes, addr 0x17b386c, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_XZNotes() ;

/// @brief Method get_YZNotes, addr 0x17b387c, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_YZNotes() ;

/// @brief Method set_XYNotes, addr 0x17b3854, size 0x8, virtual false, abstract: false, final false
inline void set_XYNotes(::System::Object*  value) ;

/// @brief Method set_XZNotes, addr 0x17b3864, size 0x8, virtual false, abstract: false, final false
inline void set_XZNotes(::System::Object*  value) ;

/// @brief Method set_YZNotes, addr 0x17b3874, size 0x8, virtual false, abstract: false, final false
inline void set_YZNotes(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetNoteboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetNoteboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetNoteboard(NetNoteboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetNoteboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetNoteboard(NetNoteboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1445};

/// @brief Field <XYNotes>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Object*  ____XYNotes_k__BackingField;

/// @brief Field <XZNotes>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Object*  ____XZNotes_k__BackingField;

/// @brief Field <YZNotes>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Object*  ____YZNotes_k__BackingField;

/// @brief Field _stringsize, offset: 0x98, size: 0x4, def value: None
 float_t  ____stringsize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NetNoteboard, ____XYNotes_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::NetNoteboard, ____XZNotes_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::NetNoteboard, ____YZNotes_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::NetNoteboard, ____stringsize) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NetNoteboard, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NetNoteboard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NetNoteboard*, "VROSC", "NetNoteboard");
